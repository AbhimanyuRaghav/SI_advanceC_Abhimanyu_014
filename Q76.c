#include <stdio.h>

int main()
{
    int arr[100], n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int candidate = arr[0];
    int count = 1;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] == candidate)
            count++;
        else
            count--;

        if(count == 0)
        {
            candidate = arr[i];
            count = 1;
        }
    }

    printf("Majority Element = %d", candidate);

    return 0;
}