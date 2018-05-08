#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;


void kiir( string honapok[] ) {
    for(int i= 0; i < 12; i++) {
        cout << honapok[i] << endl;
    }
}

int main() {

string honapok[] = {"Januar","Februar","Marciuis","Aprilis","Majus","Junius","Julius","Augusztus","Szeptember","Oktober","November","December"};

for(int i = 0; i < 12; i++) {
    cout << honapok[i] << "\n";
}

cout << endl;

kiir(honapok);

return 0;

}
