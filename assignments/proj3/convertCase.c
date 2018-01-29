#include "defs.h"

//converts uppercase characters to lowercase and vice versa in the array
void convertCase(char allLines[MAX_LINE][MAX_LINE_LEN]) {
	int i, j;

	for (i = 0; i < MAX_LINE; i++) {
		for (j = 0; allLines[i][j] != '\0'; j++) {
			if (isupper(allLines[i][j]))
				allLines[i][j] = tolower(allLines[i][j]);
			else if(islower(allLines[i][j]))
				allLines[i][j] = toupper(allLines[i][j]);
		}
	}
}
