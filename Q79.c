#include <stdio.h>

int main()
{
    int arr[100];
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int slow = 0;
    int fast = 0;

    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    }
    while(slow != fast);

    printf("Loop Detected");

    return 0;
}