//       0   1   2
//     +---+---+---+
//   0 | X |   |   |
//     +---+---+---+
//   1 |   | O | O |
//     +---+---+---+
//   2 |   |   | X |
//     +---+---+---+
//
#include <stdio.h>

const int BOARD_SIZE = 3;

void print(void) {
    int col;
    int row;
    char board[3][3] = {
        { 'X', 'X', 'O' },
        { 'O', ' ', ' ' },
        { 'X', 'O', ' ' }
    };

    // Print column header
    printf("   ");
    for (col = 0; col < BOARD_SIZE; col++) {
        printf(" %d  ", col);
    }
    printf("\n");


    // Print line between rows
    printf("  +");
    for (col = 0; col < BOARD_SIZE; col++) {
        printf("---+");
    }
    printf("\n");


    for (row = 0; row < BOARD_SIZE; row++ ){
        // Print the row label
        printf("%d |", row);

        // Print each element of the table and its right border
        for (col = 0; col < BOARD_SIZE; col++) {
            printf(" %c |", board[row][col]);
        }
        printf("\n");


        // Print line between rows
        printf("  +");
        for (col = 0; col < BOARD_SIZE; col++) {
            printf("---+");
        }
        printf("\n");
    }
}

int main(void) {
    print();
    return 0;
}
