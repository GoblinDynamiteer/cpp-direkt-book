/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 63
 *  Val av bilf�rs�kring.
 *
 *  In: Bil�lder
 *  Ut: F�rs�kringstyp
 *  	�lder < 5: "V�lj helf�rs�kring!"
 *  	�lder > 5: "V�lj halvf�rs�kring!"
 *  	�lder > 25:"V�lj veteranf�rs�kring!"
 */

#include <iostream>
using namespace std;

int main(){
	int age;
	while(1){
		cout << "Ange bilens �lder: ";
		cin >> age;
		if(age > 25){
			cout << "V�lj veteranf�rs�kring!" << endl;
		}
		else if(age > 5){
			cout << "V�lj halvf�rs�kring!" << endl;
		}
		else{
			cout << "V�lj helf�rs�kring!" << endl;
		}
	}
	return 0;
}
