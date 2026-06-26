#include <stdio.h>

int checkPrime(int n)
{
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int num;

    scanf("%d", &num);

    if(checkPrime(num))
        printf("Prime Number");
    else
        printf("Not Prime Number");

    return 0;
}