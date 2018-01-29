/* Brayden Fidler - bfidler
	CPSC 111 Fall 2016 - Section 2
	10/24/2016
	Assignment 2 - You weigh how much?
	This program takes in the user's weight and calculates it on other planets 
	based on the value the user enters for the planet. It uses a function -
	planetWeight - to do so.
*/

#include <stdio.h>

float planetWeight(float weight);

int main (void) {
	float inputWeight;
	float newWeight;
	char goAgain = '1';

	fprintf(stdout, "Enter your weight in pounds: ");
	fscanf(stdin, " %f", &inputWeight);
	
	//loop runs until user enters a 0 when asked to continue
	do {
		newWeight = planetWeight(inputWeight);
		
		fprintf(stdout, " you would weigh %.2f pounds!\n", newWeight);

		//Ask the user to go again, checking for correct input	
		do {
			fprintf(stdout,
				"\nDo you want to go again? (1 for Yes, 0 for No)\n\n");
			fscanf(stdin, " %c", &goAgain);
		} while (goAgain != '1' && goAgain != '0');
	
	} while (goAgain == '1');

	return 0;
}

//function calculates weight on another planet based on earth weight given 
float planetWeight(float weight) {
	char planets[8][15] = {"Mercury", "Venus", "Mars", "Jupiter", "Saturn",
		"Uranus", "Neptune", "the Moon"}; 
	float gravFactor[8] = {.284, .907, .38, 2.34, .925, .795, 1.125, .166};
	int i;
	int choice;

	fprintf(stdout, 
		"\nWhich planet do you want to see how much you would weigh on?\n");
	
	//prints table of planets
	for(i = 0; i < 8; i++) {
		fprintf(stdout, "%d. %s\n", i + 1, planets[i]);
	}

	fprintf(stdout, "\n");
	fscanf(stdin, " %d", &choice);

	fprintf(stdout, "\nOn %s,", planets[choice - 1]);

	return weight * gravFactor[choice - 1];
}



