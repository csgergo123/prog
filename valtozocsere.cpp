#include <iostream>
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
int a = 10;
int b = 20; 

std::cout << "Eredeti\na: " << a << std::endl << "b: " << b << std::endl << std::endl;

a = 10;
b = 20;

a = a * b;
b = a / b;
a = a / b;

std::cout << "Megcserelt:\na: " << a << std::endl << "b: " << b << std::endl << std::endl;

a = 10;
b = 20;

a = a + b;
b = a - b;
a = a - b;

std::cout << "a: " << a << std::endl << "b: " << b << std::endl << std::endl;

a = 10;
b = 20;

a ^= b;
b ^= a;
a ^= b;

std::cout << "a: " << a << std::endl << "b: " << b << std::endl << std::endl;

return 0;
}