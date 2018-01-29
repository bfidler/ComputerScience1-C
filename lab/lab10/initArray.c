#include "defs.h"

void initialize(char binaryStr[], int binaryInt[]) {
	int i;

	for (i = 0; i < sLength; i++) {
		if (binaryStr[i] == '1'){
			binaryInt[i] = 1;
		}
		else {
			binaryInt[i] = 0;
		}
	}

	return;	
}
