#include <stdio.h>

int main()
{
    int arr[100], n, i, sum = 0;
    float avg;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
        sum += arr[i];

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);

    return 0;
}