/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 139
 *	Skriv en funktion som undersöker om ett tal är ett "perfekt tal"
 *
 *	Perfekta tal är tal där summan av talets produkter blir lika med talet
 *	Faktor * Faktor = Produkt
 *
 *	Exempel:
 *	6 = 1 + 2 + 3	1
 *	28 = 1 + 2 + 4 + 7 + 14
 *	496 = 1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248
 */

#include <iostream>
using namespace std;

bool isPerfect(int n);

int main(){
	for(int i = 0; i <= 50000; i++)
		if(isPerfect(i))
			cout << "Perfect: " << i << endl;
}

/* Check if number is perfect	*/
bool isPerfect(int n){
	if(n <= 1)
		return 0;
	int check = 0;
	for(int i = n-1; i > 0; i--)
		if(!(n % i)) //if proper divisor
			check += i;
	return (check == n);
}
