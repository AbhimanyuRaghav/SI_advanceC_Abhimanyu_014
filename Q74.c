#include <stdio.h>

int main()
{
    int arr[100];
    int n, low = 0, mid = 0, high;
    int temp;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    high = n - 1;

    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;

            low++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;

            high--;
        }
    }

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}