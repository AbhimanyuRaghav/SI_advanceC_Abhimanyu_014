#include <stdio.h>

int main()
{
    int arr[100], n, pos, value, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d %d", &pos, &value);

    for(i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = value;
    n++;

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}