/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 63
 *
 *  Komplettera programmet i �vning 2.1:
 *  +In: bensinf�rbrukning, som ett reellt tal
 *  +Ut: Bensinf�rbrukning och liter per mil
 *  V�rdena ska vara h�gerjusterade, ha max tv� decimaltecken
 */

#include <iostream>

/*	 Contains output manipulation functions	*/
#include <iomanip>

using namespace std;

int main(){
	int meter_idag, meter_ar;
	double bensin;
	cout << "Ange dagens m�tarst�llning: ";
	cin >> meter_idag;
	cout << "Ange m�tarst�llning f�r ett �r sedan: ";
	cin >> meter_ar;
	cout << "Ange total f�rbrukad bensin: ";
	cin >> bensin;

	/*	 setw() sets width of output, fills left space with blanks	*/

	cout << "Antal k�rda mil: "
			<< setw(10) << meter_idag - meter_ar << endl;
	cout << "Antal liter bensin: "

	/*	'fixed' sets floating point values to fixed length,
	 * 	specified with setprecision()	*/
			<< setw(10) << fixed << setprecision(2)<< bensin << endl;
	cout << "F�rbrukning per mil: "
			<< setw(7) << bensin / (meter_idag - meter_ar);
	return 0;
}
