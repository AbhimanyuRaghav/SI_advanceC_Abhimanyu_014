#include <stdio.h>

int main()
{
    int a[10][10], b[10][10];
    int r, c, i, j, flag = 1;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
            scanf("%d", &b[i][j]);
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(a[i][j] != b[i][j])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Matrices are Equal");
    else
        printf("Matrices are Not Equal");

    return 0;
}