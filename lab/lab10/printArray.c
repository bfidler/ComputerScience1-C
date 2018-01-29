#include "defs.h"

void printArray(int binaryInt[]){ 
	int i;

	fprintf(stdout, "\nThe binary number you entered was: ");
				
	for (i = 0; i < sLength; i++) {
		fprintf(stdout, "%d", binaryInt[i]);
	}
	
	return;
}
