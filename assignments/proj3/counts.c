#include "defs.h"

//counts the number of words and characters in the program then prints it
void counts(char allLines[MAX_LINE][MAX_LINE_LEN], int numLines) {
	int i, j;
	int numWords = 0;
	int numChar = 0;
	
	for(i = 0; i < numLines; i++) {
		for(j = 0; allLines[i][j] != '\0'; j++) {
			//all non spaces are considered char
			if (!isspace(allLines[i][j]))
				numChar++;
			//finds potential word
			if (isalnum(allLines[i][j])) {
				//counts the word at it's conclusion, preventing contractions from
				//causing duplicates
				if ((!isalnum(allLines[i][j + 1])) && (allLines[i][j + 1] != 39)) {
						numWords++;
				}
				if (allLines[i][j + 1] == 39) {
					 if (!isalnum(allLines[i][j + 2])) {
						 	numWords++;
					 }
				}
			}

		}
	}
	
	fprintf(stdout, "word count is: %d\n", numWords);
	fprintf(stdout, "char count is: %d\n", numChar);

}

