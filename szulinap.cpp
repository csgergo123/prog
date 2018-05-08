#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main() {
	
	int ev = 2000;
	int honap = 1;
	int nap = 1;
	int hetnapja = 5;
	int szul_ev;
	int szul_nap;
	int szul_hon;
	int honapok[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
	string napok[7] = {"Hétfő", "Kedd", "Szerda", "Csütörtök", "Péntek", "Szombat", "Vasárnap"};

	cout << "Add meg a szuletesi datumod! (eeee hh nn)" << endl;
	cin >> szul_ev >> szul_hon >> szul_nap;
	
	while(ev != 3000) {
		hetnapja += 365;
		if(ev % 4 == 0 && !(ev % 100 == 0 && ev % 400 != 0)){
			hetnapja++;
		}
		ev++;
	}

	hetnapja += honapok[szul_hon-1];
	hetnapja += szul_nap-1;

	cout << napok[hetnapja % 7] << endl;

	return 0;
}