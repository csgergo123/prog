#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {

   int betu = 0;
   int szam = 0;
   int szavak = 0;
   int sor = 0;
   int specialis = 0;

   ifstream adatok ("adatok.txt");

   char ch; 
   int sum = 0;

   while(adatok.get(ch))
   {
     if (ch == ' ' || ch == '\n' || ch == '\t')
       szavak++;
     if (ch == '\n')
        sor++;
     if (isalpha(ch))
       betu++;
     if (isdigit(ch))
       szam++;
     if (ispunct(ch))
       specialis++;
   }
   sum = betu + szam + specialis;
   
   cout << "betu: "<< betu << endl;
   cout << "szam: " << szam << endl;
   cout << "szo: " << szavak << enld;
   cout << "sor: " << sor << endl;
   cout << "specialis karakter: " << specialis << endl;
   cout << "\n osszesen: " << sum << endl;
   
   return 0;
}