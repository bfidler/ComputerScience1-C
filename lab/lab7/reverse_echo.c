/*	
	Brayden Fidler
	CpSc 1111, Fall 2016
	Lab Section 5
   reverse_echo.c program for lab 7

	see README file for description
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int i;

	printf("argc is:  %d\n", argc);	

	// finish the rest of the for loop 
	for (i = argc - 1; i > 0; i--) {
		if (i >  1) {
			fprintf(stdout, "%s ", argv[i]);
		}
		else {
			fprintf(stdout, "%s", argv[i]);
		}
	}

	printf("\n\n");

	return 0;
}
