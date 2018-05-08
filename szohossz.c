#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a = 0;
	int b = 0x01;

	while(b <<= 1) {
		a++;
	}

	printf("Gepi szohossz: %d bite", a+1);
	return 0;
}
