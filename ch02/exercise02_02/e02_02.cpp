/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 63
 *
 *  Komplettera programmet i övning 2.1:
 *  +In: bensinförbrukning, som ett reellt tal
 *  +Ut: Bensinförbrukning och liter per mil
 *  Värdena ska vara högerjusterade, ha max två decimaltecken
 */

#include <iostream>

/*	 Contains output manipulation functions	*/
#include <iomanip>

using namespace std;

int main(){
	int meter_idag, meter_ar;
	double bensin;
	cout << "Ange dagens mätarställning: ";
	cin >> meter_idag;
	cout << "Ange mätarställning för ett år sedan: ";
	cin >> meter_ar;
	cout << "Ange total förbrukad bensin: ";
	cin >> bensin;

	/*	 setw() sets width of output, fills left space with blanks	*/

	cout << "Antal körda mil: "
			<< setw(10) << meter_idag - meter_ar << endl;
	cout << "Antal liter bensin: "

	/*	'fixed' sets floating point values to fixed length,
	 * 	specified with setprecision()	*/
			<< setw(10) << fixed << setprecision(2)<< bensin << endl;
	cout << "Förbrukning per mil: "
			<< setw(7) << bensin / (meter_idag - meter_ar);
	return 0;
}
