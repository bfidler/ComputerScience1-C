#include "defs.h"

int convert(int binaryInt[]) {
	int sum = 0;
	int i;

	for (i = 0; i < sLength; i++) {
		sum  = sum + pow(2,i) * binaryInt[sLength - i - 1];
	}

	return sum;
}
