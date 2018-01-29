/*
	Brayden Fidler
	CSPC 1110 Fall 2016
	Lab Section 5
	Lab Assignment 4 takes in a value then prints it in octal hex and its decimal value then
	computes the sum of the square of each digits
*/

#include <stdio.h>

int main(void) { 
	char userInput;
	int squareSum = 0;
	int decimalVal;
	int remainder;

	fprintf(stdout, "Enter a character: ");
	fscanf(stdin, " %c", &userInput);	//Character input
	fprintf(stdout,"\n%-10s%-9s%-s\n", "DECIMAL", "OCTAL", "HEX");	//Columns using Flags
	fprintf(stdout,"%-10d%-9o%-6hx\n", userInput, userInput, userInput);	//Printed in different data type

	decimalVal = (int)userInput;

	while(decimalVal > 0 ) {
		remainder  = decimalVal % 10;
		squareSum = squareSum + remainder * remainder;
		decimalVal  = decimalVal / 10;
	}

	fprintf(stdout,"\nThe sum of the sqaures of %d is %d\n", userInput, squareSum);

	return(0);
}
