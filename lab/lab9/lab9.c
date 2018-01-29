/* Brayden Fidler
	CPSC 111 Fall 2016
	Lab 9
	Program converts binary to decimal
*/

#include <math.h>
#include <stdio.h>
#include <string.h>

void arrayInt(char binaryStr[], int binaryInt[], int sLength);
void printArray(int binaryInt[], int sLength);
int convertToDecimal(int binaryInt[], int sLength);

int main(void) {

	int decValue = 0;
	char binaryString[25];
	int sLength;

	fprintf(stdout, "Enter a binary number (consists of 1s and 0s) : ");
	fscanf(stdin, " %s", binaryString);

	sLength = strlen(binaryString);
	int binaryInt[sLength];

	fprintf(stdout,"\nYour number consisted of %d digits\n", sLength);

	arrayInt(binaryString, binaryInt, sLength);

	printArray(binaryInt, sLength);

	decValue = convertToDecimal(binaryInt, sLength);

	fprintf(stdout, "\n\nThe decimal equivalent of that number is: %d\n\n", 
	decValue);

	return 0;
}

void arrayInt(char binaryStr[], int binaryInt[], int sLength) {
	int i;

	for (i = 0; i < sLength; i++) {
		if (binaryStr[i] == '1'){
			binaryInt[i] = 1;
		}
		else {
			binaryInt[i] = 0;
		}
	}
}

void printArray(int binaryInt[], int sLength) {
	int i;

	fprintf(stdout, "\nThe binary number you entered was: ");
	
	for (i = 0; i < sLength; i++) {
		fprintf(stdout, "%d", binaryInt[i]);
	}
	
}

int convertToDecimal(int binaryInt[], int sLength) {
	int sum = 0;
	int i;

	for (i = 0; i < sLength; i++) {
		sum  = sum + pow(2,i) * binaryInt[sLength - i - 1];
	}

	return sum;
}
