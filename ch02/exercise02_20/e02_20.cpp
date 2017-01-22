/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 66
 *  Nederbörd
 *  In: Årsnederbörd 0-3000 mm / 20 år
 *  Ut: Data som ett liggande histogram
 */

#include <iostream>
#include <iomanip>
using namespace std;

#define MAX_YEAR 5

int main(){
	int regn[MAX_YEAR];
	for(int i = 0; i < MAX_YEAR; i++){
		cout << "Ange regndata för år " << i+1 <<": ";
		cin >> regn[i];
	}

	/*	 Print histogram	*/
	cout << "År 0          1          2          3  x1000 mm" << endl;
	int year = 1;
	for(int r : regn){
		cout << fixed << setw(2) << year++ << " ";
		/*	 10 dots = 1000 mm	*/
		int dots = r/100;
		while(dots){
			cout << "*";
			dots--;
		}
		cout << endl;
	}

	return 0;
}
