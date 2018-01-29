/*
	Brayden Fidler
	CPSC Lab 111 Fall 2016
	Lab 10
	Takes in a binary number on converts it to decimal
*/

#include "defs.h"

int main(void) {

	int decValue = 0;
	char binaryString[25];

	fprintf(stdout, "Enter a binary number (consists of 1s and 0s) : ");
	fscanf(stdin, " %s", binaryString);

	sLength = strlen(binaryString);
	int binaryInt[sLength];

	fprintf(stdout,"\nYour number consisted of %d digits\n", sLength);

	initialize(binaryString, binaryInt);

	printArray(binaryInt);

	decValue = convert(binaryInt);

	fprintf(stdout, "\n\nThe decimal equivalent of that number is: %d\n\n", 
		decValue);

	return 0;
}
