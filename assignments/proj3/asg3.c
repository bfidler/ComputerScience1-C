#include "defs.h"

int main(void) {
	char fileArray[MAX_LINE][MAX_LINE_LEN];

	int lineNum = textInit(fileArray);
	textPrint(fileArray, lineNum);

	fprintf(stdout, "line count is: %d\n", lineNum);
	counts(fileArray, lineNum);

	convertCase(fileArray);
	textPrint(fileArray, lineNum);
	convertCase(fileArray);
	textPrint(fileArray, lineNum);
	
	searchForWord(fileArray, lineNum);

	return 0;
}

//fills the array with lines from the text and returns the number of lines
int textInit(char allLines[MAX_LINE][MAX_LINE_LEN]) {
	int lines = 0;

	while(fgets(allLines[lines], MAX_LINE_LEN, stdin) != NULL) {
		lines++;
	}

	return lines;
}

//prints the file array out line by line
void textPrint(char allLines[MAX_LINE][MAX_LINE_LEN], int numLines) {
	int i = 0;
   
	while(i < numLines){
		fprintf(stdout, "%s",allLines[i]);
		i++;
	}
}
