/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 63
 *
 *  Omvandla miles/gallon till liter/mil
 *
 *  In: miles/gallon
 *  Ut: liter/mil
 *
 *  1 mile = 1.609 km = 0.1609 mil
 *  1 gallon = 3.785 liter
 */

#include <iostream>
using namespace std;

#define GALLON 3.785
#define MILE 0.1609

int main(){
	double mpg;
	cout << "Ange miles per gallon: ";
	cin >> mpg;

	/*	10 km / gallon	*/
	double omvandling = mpg * MILE;

	/*	10 km / liter	*/
	omvandling /= GALLON;

	/* invert km/liter -> liter/km	*/
	omvandling = 1.0 / omvandling;

	/*	 Printout	*/
	cout << mpg << " miles/gallon är " << omvandling << " liter/mil!";

	return 0;
}
