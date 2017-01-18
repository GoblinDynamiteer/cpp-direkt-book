/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 64
 *
 *  Bankränta 2
 *  In: Insatt kapital, räntesats
 *  Ut: Antal år innan kapital når 100 000 kr
 */

#include <iostream>
#include <iomanip>
using namespace std;


int main(){
	double kapital, ranta;
	cout << "Ange insatt kapital: ";
	cin >> kapital;
	cout << "Ange ränta: ";
	cin >> ranta;

	int ar = 0;
	for(kapital; kapital <= 100000; ar++){
		kapital += kapital * (ranta / 100.0f);
	}

	cout << "Det tar " << ar << " år innan kapitalet är "
			<< fixed << setprecision(2) << kapital << " kr" <<  endl;

	return 0;
}
