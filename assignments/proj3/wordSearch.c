#include "defs.h"

//asks the user for an input word then searches the array for the
//amount of times the word, appears printing the value
void searchForWord(char allLines[MAX_LINE][MAX_LINE_LEN], int numLines) {
	char theWord[99] = "";
	
	fprintf(stdout, "Search the file for what word? ");
	freopen("/dev/tty", "rw", stdin);
	scanf(" %s", theWord);


	int count = 0;
	int i, j, k; 
	int wordLen = (int)strlen(theWord);

	for (i = 0; i < numLines; i++) {
		for (j = 0; allLines[i][j] != '\0'; j++) {
			//finds the correct first character in the array
			if (tolower(allLines[i][j]) == tolower(theWord[0])) {
				_Bool isWord = 1;
				k = 1;
				
				//loops while the chars are checked and it still may be correct
				while ((k < wordLen) && (isWord == 1)) {
					//breaks loop if end of line is reached
					if (allLines[i][j + k] == '\0') {
						isWord = 0;
					}
					//increments if the char is correct
					else if(tolower(allLines[i][j + k]) == tolower(theWord[k])) {
						k++;
					}
					else {
						isWord = 0;
					}
				}
				//makes sure the word isn't in the middle of a larger word
				if (isalpha(allLines[i][j - 1])) {
					isWord = 0;
				}
				//makes sure word isn't the beginning of a larger word
				if (isalpha(allLines[i][j + k])) {
					isWord = 0;
				}


				if (isWord == 1) {
					count++;
				} 
			}
		}
	}

	fprintf(stdout, "> %s < appears %d times.\n", theWord, count);
}

