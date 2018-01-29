/*	Brayden Fidler
	CPSC 111 Fall 2016
	Lab 13
	Program deals with fibbancia numbers
*/

#include <stdlib.h>
#include <stdio.h>

int * generateFibonacci(int size);
void printHistogram(int fibArray[], int size, char theChar);

int main(int argc, char  *argv[]) {
	int numFiban;
	char fibChar;

	fibChar = argv[2];
	sscanf(argv[1], "%d", &numFiban);
	sscanf(argv[2], "%c", &fibChar);

	int* fibPtr;
	fibPtr = generateFibonacci(numFiban);
	printHistogram(fibPtr, numFiban, fibChar);

	return 0;
}

//allocates memmory to an array of fib numbers and returns the pointer
int* generateFibonacci(int size) {
	int *arrayPtr;
	int i;
	
	arrayPtr = (int*)calloc(size, sizeof(int));
	
	if (arrayPtr == NULL) {
		fprintf(stdout, "There has been an error. Exiting Program...\n");
		exit(0);
	}

	for (i = 0; i < size; i++) {
		if (i == 0 || i == 1) {
			arrayPtr[i] = 1;
		}
		else {
			arrayPtr[i] = arrayPtr[i - 1] + arrayPtr[i - 2];
		}
	}

	return arrayPtr;
}

//prints the Fiban number array on each line using the character passed
void printHistogram(int fibArray[], int size, char theChar) {
	int i, j;

	for (i = 0; i < size; i++) {
		for (j = 0; j < fibArray[i]; j++) {
			fprintf(stdout, "%c", theChar);
		}
		
		fprintf(stdout, "\n");
	}
	free(fibArray);	
}


