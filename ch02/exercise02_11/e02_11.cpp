/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 64
 *
 *  Kommun befolkningsutveckling
 *  In: År
 *  Ut: Invånarantal vid inmatat år
 *
 *  Data:
 *  	Invånare: 		26000 st
 *  	Födda/år:		0.7%
 *  	Döda/år:		0.6%
 *  	Inflytt/år:		300 st
 *  	Utflytt/år		325 st
 *
 */

#include <iostream>
using namespace std;

#define INFLYTT 300
#define UTFLYTT 325
#define FODELSE 1.7
#define DODSFALL 0.6

int main(){
	int invanare = 26000, ar;
	cout << "Ange år: ";
	cin >> ar;
	int count = ar;
	while(count--){
		double doda = invanare * DODSFALL/100.0;
		double fodda = invanare * FODELSE/100.0;
		invanare += (INFLYTT - UTFLYTT);
		invanare += (int)(fodda - doda);
	}
	cout << "År " << ar << ": " << invanare << endl;
	return 0;
}
