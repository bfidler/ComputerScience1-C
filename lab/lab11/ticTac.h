/*   ticTac.h   */

#include <stdio.h>
#include <stdlib.h>  // rand(), srand()
#include <time.h>    // time()


// Size of the board (square)
const int  BOARD_SIZE     = 3;

// Symbols used for the board
const char BLANK_SYMBOL   = ' ';
const char COMP_SYMBOL    = 'O';
const char HUMAN_SYMBOL   = 'X';

// Human goes first
const int  HUMANS_TURN    = 0;
const int  COMPUTERS_TURN = 1;


// Function prototypes
void initializeBoard(char board[BOARD_SIZE][BOARD_SIZE]);
int  hasWon(char board[BOARD_SIZE][BOARD_SIZE], char mark);
int  hasWonHorizontal(char board[BOARD_SIZE][BOARD_SIZE], char mark);
int  hasWonVertical(char board[BOARD_SIZE][BOARD_SIZE], char mark);
int  hasWonDiagonal(char board[BOARD_SIZE][BOARD_SIZE], char mark);
void getComputerMove(char board[BOARD_SIZE][BOARD_SIZE]);
void getHumanMove(char board[BOARD_SIZE][BOARD_SIZE]);
void printBoard(char board[BOARD_SIZE][BOARD_SIZE]);
void clearScreen(void);
