#include <stdio.h>

char board[3][3]; // 3x3 Tic-Tac-Toe board
char currentPlayer;

void initializeBoard() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

void displayBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

int checkWin() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) ||
            (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)) {
            return 1;
        }
    }
    // Check diagonals
    if ((board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
        (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)) {
        return 1;
    }
    return 0;
}

int checkDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ') return 0;
    return 1;
}

void playerMove() {
    int row, col;
    printf("Player %c, enter your move (row and column): ", currentPlayer);
    scanf("%d %d", &row, &col);
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
        board[row][col] = currentPlayer;
    } else {
        printf("Invalid move! Try again.\n");
        playerMove();
    }
}

int main() {
    initializeBoard();
    currentPlayer = 'X';
    int gameOver = 0;

    while (!gameOver) {
        displayBoard();
        playerMove();
        if (checkWin()) {
            displayBoard();
            printf("Player %c wins!\n", currentPlayer);
            gameOver = 1;
        } else if (checkDraw()) {
            displayBoard();
            printf("It's a draw!\n");
            gameOver = 1;
        }
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'; // Switch player
    }
    return 0;
}
