#include <stdio.h>
#include <stdlib.h>

void drawBoard(char board[3][3]) {
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
}

// Function to check for a win
int checkWin(char board[3][3], char player) {
    int i;
    // Check rows
    for (i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return 1;
        }
        // 0,0  X | X | X
        // 0,1
        // 0,2

        // 1,0 
        // 1,1  X | X | X
        // 1,2

        // 2,0 
        // 2,1
        // 2,2  X | X | X
    }
    // Check columns
    for (i = 0; i < 3; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return 1;
        }
        //0,0 X | | 
        //1,0 X | |
        //2,0 X | |

        //0,1 | X |
        //1,1 | X |
        //2,1 | X |

        //0,2 | | X
        //1,2 | | X
        //2,2 | | X
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return 1;
        //0,0  X| |
        //1,1   |X|
        //2,2   | |X

        //0,2   | | X
        //1,1   |X|
        //2,0  X| |
    }
    return 0;
}

int main() {
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    char player = 'X';
    int move;
    int row, col;

    while (1) {
        drawBoard(board);
        printf("Player %c, enter your move (1-9): ", player);
        scanf("%d", &move);
        system("cls");

        // Convert move to row and column
        row = (move - 1) / 3;
        col = (move - 1) % 3;
        printf("Row: %d\n",row);
        printf("Col: %d\n",col);
        //check draw
        int filled = 0;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(board[i][j] == 'X' || board[i][j] == 'O') {
                    filled += 1;
                } 
            }
        }
        // printf("Boxes Filled: %d\n",filled);
        // Check if move is valid
        if (board[row][col] != 'X' && board[row][col] != 'O') {
            board[row][col] = player;
            if (checkWin(board, player)) {
                drawBoard(board);
                printf("Player %c wins!\n", player);
                break;
            }
            if(filled == 8){
                drawBoard(board);
                printf("Draw!\n");
                break;
            }
            // Switch player
            if (player == 'X') {
                player = 'O';
            } else {
                player = 'X';
            }
        } else {
            printf("Invalid move, try again.\n");
        }
    }

    return 0;
}