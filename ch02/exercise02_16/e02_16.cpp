/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 65
 *
 *  Linjär sökning
 *  Skirv om satserna på s50 så att sökning
 *  avbryts om det sökta talet inte finns
 *  i arrayen.
 *  När denna är storterad i storleksordning.
 */

#include <iostream>
#include <array>
using namespace std;

int main(){
	int tal, k, f[] = {1,2,3,4,5,7,9,15,17,20};
	int n = 10;
	cout << "Vilket tal letar du efter? ";
	cin >> tal;
	for(k = 0; (k < n) && (f[k] < tal); k++){
		cout << "f["<< k << "] == " << f[k] << endl;
		;
	}
	if(f[k] == tal && k < n){
		cout << "Talet finns på index " << k << endl;
		cout << "f["<< k << "] == " << f[k];
	}
	else{
		cout << "Talet finns inte" << endl;
	}
	return 0;
}
