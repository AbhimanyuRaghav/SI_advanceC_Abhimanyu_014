#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c, i, j;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }

    printf("Transpose:\n");

    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
            printf("%d ", a[j][i]);

        printf("\n");
    }

    return 0;
}