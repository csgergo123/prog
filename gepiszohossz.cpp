#include <iostream>

int main() {
	int a = 0;
	int b = 0x01;

	while(b <<= 1) {
		a++;
	}

	std::cout << "A gepi szohossz: " << a+1 << " bite" << std::endl;

	return 0;
}
