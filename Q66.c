#include <stdio.h>

void callByValue(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Inside Call By Value: %d %d\n", a, b);
}

void callByReference(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    printf("Inside Call By Reference: %d %d\n", *a, *b);
}

int main()
{
    int x = 10, y = 20;

    callByValue(x, y);
    printf("After Call By Value: %d %d\n", x, y);

    callByReference(&x, &y);
    printf("After Call By Reference: %d %d\n", x, y);

    return 0;
}