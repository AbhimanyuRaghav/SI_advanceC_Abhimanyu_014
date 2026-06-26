#include <stdio.h>

int main()
{
    int n, temp, rem, sum = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        rem = n % 10;

        fact = 1;
        for(i = 1; i <= rem; i++)
        {
            fact *= i;
        }

        sum += fact;
        n /= 10;
    }

    if(sum == temp)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}