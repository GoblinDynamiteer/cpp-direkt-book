/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 64
 *
 *  Bankr�nta 2
 *  In: Insatt kapital, r�ntesats
 *  Ut: Antal �r innan kapital n�r 100 000 kr
 */

#include <iostream>
#include <iomanip>
using namespace std;


int main(){
	double kapital, ranta;
	cout << "Ange insatt kapital: ";
	cin >> kapital;
	cout << "Ange r�nta: ";
	cin >> ranta;

	int ar = 0;
	for(kapital; kapital <= 100000; ar++){
		kapital += kapital * (ranta / 100.0f);
	}

	cout << "Det tar " << ar << " �r innan kapitalet �r "
			<< fixed << setprecision(2) << kapital << " kr" <<  endl;

	return 0;
}
