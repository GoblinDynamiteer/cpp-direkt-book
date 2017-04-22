/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 139
 *  Använd funktionen nfak på sidan 135 för att skriva en funktion
 *  som beräknar binominalkoefficienten av två icke negativa heltal n & k.
 *  C(n,k) = (n!) / ((k!) * (n-k)!)
 */

#include <iostream>
using namespace std;

int nfak(int n);
double binom(int n, int k);

int main(){
	int n = 5, k = 3;
	cout << "C(" << n << "," << k <<") = " << binom(n,k);
	return 0;
}

/*	Calculate n! 	*/
int nfak(int n){
	if(n <= 0){
		return 1;
	}
	else{
		return n * nfak(n-1);
	}
}

/*	Calculate Binomial Coefficient	*/
double binom(int n, int k){
	return nfak(n) / ((nfak(k)) * (nfak(n-k)));
}
