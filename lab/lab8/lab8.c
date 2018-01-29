/*
	Brayden Fidler
	CPSC 111 Lab Fall 2016
	Lab 8
	Program take binary input and converts it to a decimal value
*/

#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void) {

	int decValue = 0;
	char binaryString[25];
	int sLength;
	int i;

	fprintf(stdout, "Enter a binary number (consists of 1s and 0s) : ");
	fscanf(stdin, " %s", binaryString);

	sLength = strlen(binaryString);
	int binaryInt[sLength];

	fprintf(stdout,"\nYour number consisted of %d digits\n", sLength);

	for (i = 0; i < sLength; i++) {
		if (binaryString[i] == '1'){
			binaryInt[i] = 1;
		}
		else {
			binaryInt[i] = 0;
		}
	}

	fprintf(stdout, "\nThe binary number you entered was: ");

	for (i = 0; i < sLength; i++) {
		fprintf(stdout, "%d", binaryInt[i]);
	}

	for (i = 0; i < sLength; i++) {
		decValue = decValue + pow(2,i) * binaryInt[sLength - i - 1];
	}

	fprintf(stdout, "\n\nThe decimal equivalent of that number is: %d\n\n", 
	decValue);

	return(0);
}
