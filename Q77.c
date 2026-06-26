#include <stdio.h>

int main()
{
    int arr[100];
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int water = 0;

    for(int i = 1; i < n - 1; i++)
    {
        int left = arr[i];
        int right = arr[i];

        for(int j = 0; j < i; j++)
            if(arr[j] > left)
                left = arr[j];

        for(int j = i + 1; j < n; j++)
            if(arr[j] > right)
                right = arr[j];

        water += (left < right ? left : right) - arr[i];
    }

    printf("Water Trapped = %d", water);

    return 0;
}