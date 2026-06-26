#include <stdio.h>

int main()
{
    int days, years, weeks, remaining;

    printf("Enter days: ");
    scanf("%d", &days);

    years = days / 365;
    remaining = days % 365;

    weeks = remaining / 7;
    remaining = remaining % 7;

    printf("Years = %d\n", years);
    printf("Weeks = %d\n", weeks);
    printf("Days = %d", remaining);

    return 0;
}