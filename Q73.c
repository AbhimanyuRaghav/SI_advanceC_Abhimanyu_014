#include <stdio.h>

int main()
{
    int arr[100], n, x;
    int first = -1, last = -1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            if(first == -1)
                first = i;

            last = i;
        }
    }

    printf("First Position = %d\n", first);
    printf("Last Position = %d", last);

    return 0;
}