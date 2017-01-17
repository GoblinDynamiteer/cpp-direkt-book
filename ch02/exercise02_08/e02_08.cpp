/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 64
 *
 *  Ber�kna kvarvarande procent massa av isotopen kol-14 efter S antal �r
 *
 *  In: Antal �r S
 *  Ut: Kvarvarande procent
 */

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
	/*	 Material-constant lambda for c14	*/
	double lambda = log(2) / 5730.0;

	int s;
	cout << "Ange antal �r: ";
	cin >> s;

	/*	 Material remaining after s years,
	  	 n0 is material mass at time 0	*/
	double n0 = 1.0, n = n0 * pow(M_E, -lambda * s);

	double percent = (n/n0) * 100.0;

	/*	 Printout	*/
	cout << "Efter " << s << " �r finns " << fixed << setprecision(2)
			<< percent << "% kvar!";

	return 0;
}
