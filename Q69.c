#include <stdio.h>

void hanoi(int n, char source, char helper, char destination)
{
    if(n == 1)
    {
        printf("Move Disk 1 from %c to %c\n", source, destination);
        return;
    }

    hanoi(n - 1, source, destination, helper);

    printf("Move Disk %d from %c to %c\n", n, source, destination);

    hanoi(n - 1, helper, source, destination);
}

int main()
{
    int n;

    scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C');

    return 0;
}