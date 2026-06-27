#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int user, computer;

    printf("=== Rock Paper Scissors Game ===\n");
    printf("Enter your choice:\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    scanf("%d", &user);

    // Generate random choice for computer
    srand(time(0));
    computer = rand() % 3 + 1;

    printf("Computer chose: ");
    if (computer == 1)
        printf("Rock\n");
    else if (computer == 2)
        printf("Paper\n");
    else
        printf("Scissors\n");

    // Determine winner
    if (user == computer)
    {
        printf("It's a Draw!\n");
    }
    else if ((user == 1 && computer == 3) ||
             (user == 2 && computer == 1) ||
             (user == 3 && computer == 2))
    {
        printf("You Win!\n");
    }
    else if (user >= 1 && user <= 3)
    {
        printf("Computer Wins!\n");
    }
    else
    {
        printf("Invalid Choice!\n");
    }

    return 0;
}
