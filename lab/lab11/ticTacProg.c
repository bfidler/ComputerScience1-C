/* Brayden Fidler
	CPSC 111 Lab Fall 2016
	Lab 11
	Program plays tic tac toe
*/

#include "ticTac.h"



//
// The main function should not be changed
//
int main(void) {
    char board[BOARD_SIZE][BOARD_SIZE];
    int  humanWon    = 0; // boolean (0/1)
    int  computerWon = 0; // boolean (0/1)
    int  move        = 0;

    // Seed the random number generator
    srand(time(0));

    initializeBoard(board);

    while ((move < (BOARD_SIZE * BOARD_SIZE)) && !humanWon && !computerWon) {
        clearScreen();

        if ((move % 2) == COMPUTERS_TURN) {
            getComputerMove(board);
        } else {
            printBoard(board);
            getHumanMove(board);
        }

        computerWon = hasWon(board, COMP_SYMBOL);
        humanWon    = hasWon(board, HUMAN_SYMBOL);
        move++;
    }

    clearScreen();
    printBoard(board);

    if (humanWon) {
        printf(">>>> You won!\n");
    } else if (computerWon) {
        printf("<<<< I won!\n");
    } else { // move >= BOARD_SIZE * BOARD_SIZE
        printf("==== A Draw\n");  
    }

    return 0;
}


//
// Initialized the board to all BLANK_SYMBOL
//
void initializeBoard(char board[BOARD_SIZE][BOARD_SIZE]) {
    int row;

    for (row = 0; row < BOARD_SIZE; row++) {
        int col;

        for (col = 0; col < BOARD_SIZE; col++) {
            board[row][col] = BLANK_SYMBOL;
        }
    }
}


//
// Determines if the 'mark' completely fills a row, column, or diagonal
// returns 1 if yes, 0 if no
//
int hasWon(char board[BOARD_SIZE][BOARD_SIZE], char mark) {
    return    hasWonHorizontal(board, mark)
           || hasWonVertical(board, mark)
           || hasWonDiagonal(board, mark);
}


//
// Determines if the 'mark' completely fills a row
// returns 1 if yes, 0 if no
//
int hasWonHorizontal(char board[BOARD_SIZE][BOARD_SIZE], char mark) {
    int won = 0; // boolean (0/1).  Assume lost until proven true
    int row;

    for (row = 0; row < BOARD_SIZE && !won; row++) {
        int match = 1; // boolean (0/1)
        int col;

        for (col = 0; col < BOARD_SIZE; col++) {
            if (board[row][col] != mark) {
                match = 0;
            }
        }

        won = match;
    }

    return won;
}


//
// Determines if the 'mark' completely fills a column
// returns 1 if yes, 0 if no
//
int hasWonVertical(char board[BOARD_SIZE][BOARD_SIZE], char mark) {
    int won = 0;
	 int col;

	 for (col = 0; col < BOARD_SIZE && !won; col++) {
		 int match = 1;
		 int row; 

		 for (row = 0; row < BOARD_SIZE; row++) {
			 if (board[row][col] != mark) {
				 	match = 0;
			 }
		 }

		 won = match;
	 }

    return won; // Stub -- make this return the correct value
}


//
// Determines if the 'mark' completely fills a diagonal
// returns 1 if yes, 0 if no
//
int hasWonDiagonal(char board[BOARD_SIZE][BOARD_SIZE], char mark) {
	int col;
	int row;
	int win1 = 1;
	int win2 = 1;
	int won = 0;

	for (col = 0; col < BOARD_SIZE && win1; col++) {
		int match = 1;
		row = col;
		if (board[row][col] != mark) {
			match = 0;
		}

		win1 = match;
	}

	if (win1 == 1) {
		 won = 1;
	}
	else {
		for (col = 0; col < BOARD_SIZE && win2; col++) {
			int match = 1;
			row = BOARD_SIZE - 1 - col;
			if (board[row][col] != mark) {
				match = 0;
			}
															     
			win2 = match;
		}

		won = win2;
	}


    return won; // Stub -- make this return the correct value
}


//
// Gets computer move by randomly picking an unoccupied cell
//
void getComputerMove(char board[BOARD_SIZE][BOARD_SIZE]) {
    int row;
    int col;

    do {
        row = rand() % BOARD_SIZE;
        col = rand() % BOARD_SIZE;
    } while (board[row][col] != BLANK_SYMBOL);

    board[row][col] = COMP_SYMBOL;
}


//
// Gets human move by prompting user for row and column numbers
//
void getHumanMove(char board[BOARD_SIZE][BOARD_SIZE]) {
   int row;
	int col;
	
	fprintf(stdout, "\nEnter the row of your move: ");
	fscanf(stdin, " %d", &row);

	fprintf(stdout, "\nEnter the column of your move: ");
	fscanf(stdin, " %d", &col);

	board[row][col] = 'X';
}


//
// Prints the board to the screen.  Example:
//
//       0   1   2
//     +---+---+---+
//   0 | X |   |   |
//     +---+---+---+
//   1 |   | O | O |
//     +---+---+---+
//   2 |   |   | X |
//     +---+---+---+
//
void printBoard(char board[BOARD_SIZE][BOARD_SIZE]) {
   int col;
	int row;

	fprintf(stdout, "    ");
	for (col = 0; col < 3; col++) {
		fprintf(stdout, "%d   ", col);
	}
	printf("\n");
		 
	printf("  +");
	for (col = 0; col < BOARD_SIZE; col++) {
		printf("---+");
   }
	printf("\n");


	for (row = 0; row < BOARD_SIZE; row++ ){
	 	printf("%d |", row);

		for (col = 0; col < BOARD_SIZE; col++) {
			printf(" %c |", board[row][col]);
		}
		printf("\n");

		printf("  +");
		for (col = 0; col < BOARD_SIZE; col++) {
			printf("---+");
		}
		printf("\n");

	}

}


//
// Clears the screen -- uses ANSI terminal control codes
//
void clearScreen(void) {
    const char ESC = 27;

    printf("%c[2J%c[H", ESC, ESC);
}
