#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	char chara;

	for(chara = 'a'; chara <= 'z'; chara++)
        cout << chara << ": " << (int)chara << hex << " 0x" << (int)chara << dec << endl;

	for(chara = '0'; chara <= '9'; chara++)
        cout << chara << ": " << (int)chara << hex << " 0x" << (int)chara << dec << endl;
}
