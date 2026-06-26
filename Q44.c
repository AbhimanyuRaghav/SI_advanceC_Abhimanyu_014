#include <stdio.h>

int main()
{
    int arr[100], n, i, key, found = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Not Found");

    return 0;
}