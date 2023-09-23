#include <stdio.h>
#include <stdlib.h>


#define ROWS 6
#define COLS 7

char board[ROWS][COLS];
int currentPlayer;


void initializeConnect4Board() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board[i][j] = ' ';
        }
    }
}

void displayConnect4Board() {
    printf("-----------------------------");
    printf("\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("| %c ", board[i][j]);
        }
        printf("|\n");
        printf("-----------------------------\n");
    }
    printf("  1   2   3   4   5   6   7\n");
    printf("\n");
}

int isConnect4BoardFull() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}

int isValidMoveConnect4(int col) {
    if (col < 0 || col >= COLS) {
        return 0;
    }
    if (board[0][col] != ' ') {
        return 0;
    }
    return 1;
}

void makeMoveConnect4(int col, int player) {
    for (int i = ROWS - 1; i >= 0; i--) {
        if (board[i][col] == ' ') {
            board[i][col] = (player == 1) ? 'X' : 'O';
            break;
        }
    }
}

int checkConnect4Win(int player) {
    
    for (int i = 0; i < ROWS - 3; i++) {
        for (int j = 0; j < COLS; j++) {
            if (board[i][j] != ' ' && board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j] && board[i][j] == board[i + 3][j]) {
                return player;
            }
        }
    }

    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS - 3; j++) {
            if (board[i][j] != ' ' && board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2] && board[i][j] == board[i][j + 3]) {
                return player;
            }
        }
    }

    for (int i = 0; i < ROWS - 3; i++) {
        for (int j = 0; j < COLS - 3; j++) {
            if (board[i][j] != ' ' && board[i][j] == board[i + 1][j + 1] && board[i][j] == board[i + 2][j + 2] && board[i][j] == board[i + 3][j + 3]) {
                return player;
            }
        }
    }

    
    for (int i = 0; i < ROWS - 3; i++) {
        for (int j = 3; j < COLS; j++) {
            if (board[i][j] != ' ' && board[i][j] == board[i + 1][j - 1] && board[i][j] == board[i + 2][j - 2] && board[i][j] == board[i + 3][j - 3]) {
                return player;
            }
        }
    }

    return 0;
}


void initializeTicTacToeBoard() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board[i][j] = ' ';
        }
    }
}

void displayTicTacToeBoard() {
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

int isTicTacToeBoardFull() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}

int isValidMoveTicTacToe(int row, int col) {
    if (row < 0 || row >= ROWS || col < 0 || col >= COLS) {
        return 0;
    }
    if (board[row][col] != ' ') {
        return 0;
    }
    return 1;
}

void makeMoveTicTacToe(int row, int col, int player) {
    board[row][col] = (player == 1) ? 'X' : 'O';
}

int checkTicTacToeWin(int player) {
    
    for (int i = 0; i < ROWS; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
            return player;
        }
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
            return player;
        }
    }

    
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
        return player;
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
        return player;
    }

    return 0;
}


void startConnect4Game() {
    initializeConnect4Board();
    currentPlayer = 1;
    int col;
    int gameOver = 0;

    printf("\n--- Connect 4 ---\n");

    while (!gameOver) {
        displayConnect4Board();

        if (currentPlayer == 1) {
            printf("Player %d, choice column (1-7): ", currentPlayer);
            scanf("%d", &col);
            col--;
        } else {
            col = rand() % COLS;
        }

        if (!isValidMoveConnect4(col)) {
            printf("Invalid Choice! Please Try Again.\n");
            continue;
        }

        makeMoveConnect4(col, currentPlayer);

        if (checkConnect4Win(currentPlayer)) {
            displayConnect4Board();
            printf("Player %d WON! Connect 4!\n", currentPlayer);
            gameOver = 1;
        } else if (isConnect4BoardFull()) {
            displayConnect4Board();
            printf("The game ended in a draw.\n");
            gameOver = 1;
        } else {
            currentPlayer = (currentPlayer == 1) ? 2 : 1;
        }
    }
}

void startTicTacToeGame() {
    initializeTicTacToeBoard();
    currentPlayer = 1;
    int row, col;
    int gameOver = 0;

    printf("\n--- Tic-Tac-Toe ---\n");

    while (!gameOver) {
        displayTicTacToeBoard();

        if (currentPlayer == 1) {
            printf("Player %d, please chose column and row (1-3): ", currentPlayer);
            scanf("%d %d", &row, &col);
            row--;
            col--;
        } else {
            do {
                row = rand() % 3;
                col = rand() % 3;
            } while (!isValidMoveTicTacToe(row, col));
            printf("Computer played: Row %d, Column %d \n", row + 1, col + 1);
        }

        if (!isValidMoveTicTacToe(row, col)) {
            printf("Invalid Choice! Please Try Again.\n");
            continue;
        }

        makeMoveTicTacToe(row, col, currentPlayer);

        if (checkTicTacToeWin(currentPlayer)) {
            displayTicTacToeBoard();
            printf("Player %d WON! Tic-Tac-Toe!\n", currentPlayer);
            gameOver = 1;
        } else if (isTicTacToeBoardFull()) {
            displayTicTacToeBoard();
            printf("The game ended in a draw.\n");
            gameOver = 1;
        } else {
            currentPlayer = (currentPlayer == 1) ? 2 : 1;
        }
    }
}


int main() {
    int choice;
    int playAgain = 1;

    while (playAgain) {
        printf("           *** Written by Emin Ayyıldız and Mustafa Atila ***\n\n\n");
        printf("*** WELCOME TO OUR GAME AREA. ENJOY ***\n\n");
        printf("CHOICE GAME:\n");
        printf("1. Connect 4\n");
        printf("2. Tic-Tac-Toe\n");
        printf("3. EXIT\n");
        printf("Enter Your Choice (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                do {
                    startConnect4Game();
                    printf("Game over. Enter 1 to play again, 0 to EXIT to the program: ");
                    scanf("%d", &playAgain);
                    if (playAgain != 1)
                        break;
                } while (1);
                break;
            case 2:
                do {
                    startTicTacToeGame();
                    printf("Game over. Enter 1 to play again, 0 to EXIT to the program: ");
                    scanf("%d", &playAgain);
                    if (playAgain != 1)
                        break;
                } while (1);
                break;
            case 3:
                playAgain = 0;
                break;
            default:
                printf("Invalid Choice!\n");
                continue;
        }

        if (playAgain == 0) {
            break;
        }
    }

    printf("EXITING........\n");
    return 0;
}
