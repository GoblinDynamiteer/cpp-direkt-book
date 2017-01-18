/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 64
 *
 *  Bankr�nta
 *  In: Insatt kapital, r�ntesats
 *  Ut: Kapital per �r, inklusive r�nta, under 10 �r
 */

#include <iostream>
#include <iomanip>
using namespace std;

#define YEARS 10

int main(){
	double kapital, ranta;
	cout << "Ange insatt kapital: ";
	cin >> kapital;
	cout << "Ange r�nta: ";
	cin >> ranta;

	for(int i = 0; i < YEARS; i++){
		kapital += kapital * (ranta / 100.0f);
		cout << "�r " << i+1 << ": " << fixed << setprecision(2) << kapital << " kr" <<  endl;
	}

	return 0;
}
