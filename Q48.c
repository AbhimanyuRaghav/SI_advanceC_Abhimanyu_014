#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r, col, i, j;

    scanf("%d %d", &r, &col);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
            scanf("%d", &a[i][j]);
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
            scanf("%d", &b[i][j]);
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
            c[i][j] = a[i][j] + b[i][j];
    }

    printf("Result Matrix:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
            printf("%d ", c[i][j]);

        printf("\n");
    }

    return 0;
}