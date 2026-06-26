#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, sum = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }

    for(i = 0; i < n; i++)
        sum += a[i][i];

    printf("Sum = %d", sum);

    return 0;
}