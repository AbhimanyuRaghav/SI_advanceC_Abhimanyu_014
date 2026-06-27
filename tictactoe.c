#include <stdio.h>

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

void displayBoard() {
    printf("\n");
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

int checkWin() {
    int i;

    // Rows and Columns
    for (i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] &&
            board[i][1] == board[i][2])
            return 1;

        if (board[0][i] == board[1][i] &&
            board[1][i] == board[2][i])
            return 1;
    }

    // Diagonals
    if (board[0][0] == board[1][1] &&
        board[1][1] == board[2][2])
        return 1;

    if (board[0][2] == board[1][1] &&
        board[1][1] == board[2][0])
        return 1;

    return 0;
}

int main() {
    int player = 1, choice, row, col, moves = 0;
    char mark;

    while (moves < 9) {
        displayBoard();

        if (player == 1)
            mark = 'X';
        else
            mark = 'O';

        printf("Player %d (%c), enter position (1-9): ", player, mark);
        scanf("%d", &choice);

        row = (choice - 1) / 3;
        col = (choice - 1) % 3;

        if (choice < 1 || choice > 9 ||
            board[row][col] == 'X' ||
            board[row][col] == 'O') {
            printf("Invalid move! Try again.\n");
            continue;
        }

        board[row][col] = mark;
        moves++;

        if (checkWin()) {
            displayBoard();
            printf("Player %d (%c) wins!\n", player, mark);
            return 0;
        }

        player = (player == 1) ? 2 : 1;
    }

    displayBoard();
    printf("It's a draw!\n");

    return 0;
}