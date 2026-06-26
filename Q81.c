#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int a[100][100];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }

    int candidate = 0;

    for(int i = 1; i < n; i++)
    {
        if(a[candidate][i] == 1)
            candidate = i;
    }

    printf("Celebrity Index = %d", candidate);

    return 0;
}