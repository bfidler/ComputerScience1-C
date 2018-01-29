/*
	Brayden Fidler
	CPSC 111 Lab Fall 2016
	Lab Section 5
	Program asks user for input until he says to quit.
*/

#include <stdio.h>
#include <math.h>

int main (void) {

	char userInput;
	char loopVar = '1';

	while(loopVar == '1') {
		fprintf(stdout, "Enter a letter or number from the keyboard. ");
		fscanf(stdin, " %c", &userInput);

		if (userInput >= 65 && userInput <= 90) {
			fprintf(stdout, "	  The lower case of that letter is: %c\n", userInput + 32);
		}
		else if (userInput >= 97 && userInput <= 122) {
			fprintf(stdout, "	  The upper case of that letter is: %c\n", userInput - 32);
		}
		else if (userInput >= 48 && userInput <= 57) {
			int cube = pow(userInput - 48, 3); 
			if (userInput % 2 == 0) {
				fprintf(stdout, "   You entered an even number.\n");
				fprintf(stdout, "   %c cubed is %d.\n", userInput, cube);
			}
			else {
				fprintf(stdout, "   You entered an odd number.\n");
				fprintf(stdout, "   %c cubed is %d.\n", userInput, cube);
			}
		}
		else {
			fprintf(stdout, "Invalid input. Try again.\n");
		}

		fprintf(stdout, "\nWould you like to go again? Enter 1 for yes, 0 for no. ");
		fscanf(stdin, " %c", &loopVar);

		while (loopVar != '1' &&  loopVar != '0') {
			fprintf(stdout, "Invalid Input. Enter 1 to go again, 0 to quit: ");
			fscanf(stdin, " %c", &loopVar);
		}
		fprintf(stdout, "\n");
	}
	
	return(0);
}
