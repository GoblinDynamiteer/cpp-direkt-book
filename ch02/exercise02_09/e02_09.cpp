/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 64
 *
 *  Bankränta
 *  In: Insatt kapital, räntesats
 *  Ut: Kapital per år, inklusive ränta, under 10 år
 */

#include <iostream>
#include <iomanip>
using namespace std;

#define YEARS 10

int main(){
	double kapital, ranta;
	cout << "Ange insatt kapital: ";
	cin >> kapital;
	cout << "Ange ränta: ";
	cin >> ranta;

	for(int i = 0; i < YEARS; i++){
		kapital += kapital * (ranta / 100.0f);
		cout << "År " << i+1 << ": " << fixed << setprecision(2) << kapital << " kr" <<  endl;
	}

	return 0;
}
