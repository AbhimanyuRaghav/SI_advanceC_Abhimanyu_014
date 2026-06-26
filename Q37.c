#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int largest, smallest;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    largest = smallest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];

        if(arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d", smallest);

    return 0;
}