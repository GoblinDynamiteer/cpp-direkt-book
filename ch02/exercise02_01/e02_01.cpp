/*
 * e02_01.cpp
 *
 *  Created on: 17 jan. 2017
 *      Author: kampe_000
 *
 *  Sida 62
 *  Ber�kna och skriv ut hur m�nga mil en en bil har g�tt under det senaste �ret
 *  In: Dagens m�tars�llning, m�tarst�llning f�r ett �r sedan.
 *  Inst�llningarna ska anges som hela antal mil.
 */

#include <iostream>

using namespace std;

int main(){
	int meter_idag, meter_ar;
	cout << "Ange dagens m�tarst�llning: ";
	cin >> meter_idag;
	cout << "Ange m�tarst�llning f�r ett �r sedan: ";
	cin >> meter_ar;
	cout << "Antal k�rda mil: " << meter_idag - meter_ar;
	return 0;
}
