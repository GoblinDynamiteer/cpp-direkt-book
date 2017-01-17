/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 63
 *
 *  Löpartävling, två lopp.
 *  In: tid i format: hh mm ss - för lopp1 och lopp2
 *  Ut: total tid för de två loppen, i format hh mm ss
 */

#include <iostream>
using namespace std;

int main(){
	int hh, mm, ss;

	cout << "Lopp 1: Ange tid (hh mm ss): ";
	cin >> hh >> mm >> ss;
	int htot = hh, mtot = mm, stot = ss;

	cout << "Lopp 2: Ange tid (hh mm ss): ";
	cin >> hh >> mm >> ss;
	htot += hh;
	mtot += mm;
	stot += ss;

	/*	 Converts seconds over 59 to minutes	*/
	if(stot > 59){
		mtot += stot / 60;
		stot = stot % 60;
	}

	/*	 Converts minutes over 59 to hours	*/
	if(mtot > 59){
		htot += mtot/60;
		mtot = mtot % 60;
	}

	cout << "Total tid: " << htot << ":" << mtot << ":" << stot << endl;

	return 0;
}
