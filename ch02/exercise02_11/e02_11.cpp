/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 64
 *
 *  Kommun befolkningsutveckling
 *  In: �r
 *  Ut: Inv�narantal vid inmatat �r
 *
 *  Data:
 *  	Inv�nare: 		26000 st
 *  	F�dda/�r:		0.7%
 *  	D�da/�r:		0.6%
 *  	Inflytt/�r:		300 st
 *  	Utflytt/�r		325 st
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
	cout << "Ange �r: ";
	cin >> ar;
	int count = ar;
	while(count--){
		double doda = invanare * DODSFALL/100.0;
		double fodda = invanare * FODELSE/100.0;
		invanare += (INFLYTT - UTFLYTT);
		invanare += (int)(fodda - doda);
	}
	cout << "�r " << ar << ": " << invanare << endl;
	return 0;
}
