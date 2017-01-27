/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 102
 *  In: Personnummer
 *  Ut: Kön: Man / Kvinna
 *
 *	Näst sista siffra:
 *		udda: man
 *		jämn: kvinna
 */

#include <iostream>
#include <cstring> //strlen()
#include <iomanip>	//setw()
using namespace std;

#define N_PNUM 11

int main(){
	char pnum[N_PNUM];
	cout << "Skriv personnummer: ";
	cin >> setw(N_PNUM);
	cin.getline(pnum, N_PNUM);

	/*	Sets i to second from last digit in pnum 	*/
	int i = pnum[strlen(pnum)-2] - '0';

	/*	Checks if i is odd or even 	*/
	if(i % 2 == 0){
		cout << "Kvinna!";
	}
	else{
		cout << "Man!";
	}

	return 0;
}
