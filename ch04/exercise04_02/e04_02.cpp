/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 139
 *	Skriv en funktion som unders�ker om ett tal �r ett primtal
 *
 *  Ett primtal �r ett naturligt tal, som �r st�rre �n 1 och
 *  som inte har n�gra andra positiva delare �n 1 och talet sj�lvt.
 */

#include <iostream>
using namespace std;

bool isPrime(int n);

int main(){
	for(int i = 0; i < 300; i++){
		if(isPrime(i)){
			cout << "Primtal: " << i << endl;
		}
	}
	return 0;
}

/*	Check if primary number 	*/
bool isPrime(int n){
	if(n <= 1){
		return 0;
	}
	for(int i = 2; i < n; i++){
		if(!(n % i)){
			return 0;
		}
	}
	return 1;
}
