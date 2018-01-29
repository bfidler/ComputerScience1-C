#include <stdio.h>

int main(void) {
	int integer1, *p1, **p2;

	integer1 = 10;
	p1 = &integer1;
	p2 = &p1;

	integer1++;
	printf("integer1= %d\n", *p1);


	return 0;
}
