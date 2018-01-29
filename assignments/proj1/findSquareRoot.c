/*	Brayden Fidler -  bfidler
	CPSC 111 Section 2
	9/30/2016
	Assignment 1 finds the square root of a number using both the
	babylonian method and functions from the math library
*/

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main (void) {
	
	double userInput;
	double squareRootMath;
	double squareRootBab;
	int i;

	//Seeds randomizer based on time
	srand((int)time(0));

	fprintf(stdout, "Enter a number: ");
	fscanf(stdin, " %lf", &userInput);
	
	squareRootMath = sqrt(userInput);

	fprintf(stdout, "Using the math library, the square root of %f is %f\n", userInput, squareRootMath);
	
	//Finds sqrt 3 times for with 3 different guesses
	for(i = 1; i <= 3; i++) {
		//random guess between 1 and the user's input
		int guess = rand() % ((int)userInput) + 1;
		int steps = 0;
		squareRootBab = (double)guess;
		
		//Runs babylonian method and list results of each step
		do {
			steps++;
			squareRootBab = .5 * (squareRootBab + (userInput/squareRootBab));
			fprintf(stdout,"\nStep %d: %15lf", steps, squareRootBab);
		} while((squareRootMath - squareRootBab >= .000001) || (squareRootBab - squareRootMath >= .000001)); 

		fprintf(stdout, "\nUsing the Babylonian method, the square root of %.0f with a starting guess of %d was found in %d steps.\n", userInput, guess, steps);

	}
	
	return(0);
}
