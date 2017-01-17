/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 62
 *
 *  Beräkna och skriv ut hur många mil en en bil har gått under det senaste året
 *  In: Dagens mätarsällning, mätarställning för ett år sedan.
 *  Inställningarna ska anges som hela antal mil.
 */

#include <iostream>

using namespace std;

int main(){
	int meter_idag, meter_ar;
	cout << "Ange dagens mätarställning: ";
	cin >> meter_idag;
	cout << "Ange mätarställning för ett år sedan: ";
	cin >> meter_ar;
	cout << "Antal körda mil: " << meter_idag - meter_ar;
	return 0;
}
