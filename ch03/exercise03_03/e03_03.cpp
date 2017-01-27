/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 101
 *	In: Dagens datum som 20åå-mm-dd,
 				personnummer
 *  Ut: "Grattis!" om födelsedag
 *
 *  Personnummer ska anges som 10
 *	siffror utan bindestreck
 */

#include <iostream>
#include <cstring>	//strncmp
#include <iomanip>	//setw()
using namespace std;

#define N_DATE 11
#define N_PNUM 11

int main(){
	char date[N_DATE], pnum[N_PNUM];

	/*	Input date and social security number 	*/
	cout << "Ange datum: ";
	cin >> setw(N_DATE);
	cin.getline(date, N_DATE);
	cout << "Ange personnummer: ";
	cin >> setw(N_PNUM);
	cin.getline(pnum, N_PNUM);

	/*	Compare date to determnine
	 		if birthday

	i		01234
			830619

	i		012345678
			2001-06-19	*/

	/*	stncmp compares strings, max n chars
			returns 0 if equal	*/
	if(	!strncmp(date+5, pnum+2, 2) &&
			!strncmp(date+8, pnum+4, 2)	){
			cout << "Grattis!";
		}

	return 0;
}
