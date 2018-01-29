/* Brayden Fidler
	CPSC 111 Fall 2016
	Lab Section 5
	This program initializes 8 variables and makes 4 calculations, printing all 4
	variables and the values of the 4 expressions using fprintf.
	
	Answer: A floating point exception occurs because the decimal on the fraction 3/5 gets truncated and the values becomes 0 which is a denominator causing issues because you cant divide 0 into a number.
*/
	
 #include<stdio.h>

int main (void) {
	
	int intVar1 = 4, intVar2 = 3, intVar3, intVar4;
	int exp1, exp2, exp3, exp4;

	exp1 = intVar1 + ( (5 * intVar2) / (3 * intVar1) );
	exp2 = intVar1 + (5 * (intVar2 / 3)) * intVar1;

	fprintf(stdout, "intVar1 = %d and intVar2 = %d\n", intVar1, intVar2);
	fprintf(stdout, "\nExpression values are:\nexp1 = %d\nexp2 = %d\n", exp1, exp2);

	intVar3 = 3;
	intVar4 = 5;

	exp3 = (intVar4 % 2) / (intVar4 / intVar3);
	exp4 = 2 + intVar3 * intVar4;

	fprintf(stdout, "\nintVar3 = %d and int Var4 = %d\n", intVar3, intVar4);
	fprintf(stdout, "\nExpression values are:\nexp3 = %d\nexp4 = %d\n", exp3, exp4);

	return 0;
}
