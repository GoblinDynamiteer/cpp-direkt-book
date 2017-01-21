/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 65
 *
 *  Funktionstabell
 *  funktion: f(x) = 3x^3 - 5x^2 +2x -20
 *  a, Skriv ut en tabell för f(x) där x är -10 -> +10
 *  b, Skriv ut en tabell för f(x) där x är -2 -> +2. Stegning 0.1
 */

#include <iostream>
#include <cmath>
using namespace std;


double fx(double x){
	return 3*x-5*pow(x,2)+2*x-20;
}

int main(){
	for(int i = -10; i<= 10; i++){
		 cout << "x: " << i << "\t " << fx((double)i) << endl;
	}
	cout << endl;
	for(double i = -2.0; i<= 2.0; i+=0.1){
		 cout << "x: " << i << "\t " << fx(i) << endl;
	}
	return 0;

}
