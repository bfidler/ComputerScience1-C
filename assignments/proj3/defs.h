#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE 200      // maximum number of lines
#define MAX_LINE_LEN	100  // maximum length of a line

int textInit(char allLines[MAX_LINE][MAX_LINE_LEN]);
void textPrint(char allLines[MAX_LINE][MAX_LINE_LEN], int numLines);
void counts(char allLines[MAX_LINE][MAX_LINE_LEN], int numLines);
void convertCase(char allLines[MAX_LINE][MAX_LINE_LEN]);
void searchForWord(char allLines[MAX_LINE][MAX_LINE_LEN], int numLines);
