/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 63
 *
 *  Växel
 *  Beräkna växel vid betalning.
 *  In: Belopp, Betalning (Sedel/Sedlar)
 *  Ut: Växel, och sedlar
 *
 *  Ex: Belopp 750, betalning: tusenlapp
 *  	Växel: 250 kr,
 *  	2st 100-sedlar
 *  	1st 50-sedel
 *
 *  Antag att växel aldrig betalas med sedlar över 100-kr
 *  Antag hela antal kronor.
 */

#include <iostream>
using namespace std;

/*	 Swedish money!	*/
#define TVAHUNDRING 200
#define HUNDRING 100
#define FEMTIOLAPP 50
#define TJUGA 20
#define TIA 10
#define FEMMA 5
#define KRONA 1

int main(){
	int pris, betalning;
	cout << "Ange belopp att betala: ";
	cin >> pris;
	cout << "Ange betalningsbelopp: ";
	cin >> betalning;
	int vaxel = betalning - pris;
	cout << "Växel: " << vaxel << " kr" << endl;
	cout << "Sedlar: " << endl;

	/*	 Determines how many of each value bills should be returned	*/
	if(vaxel >= TVAHUNDRING){
		cout << vaxel / TVAHUNDRING << "st 200-kr sedlar" << endl;
		vaxel = vaxel % TVAHUNDRING;
	}

	if(vaxel >= HUNDRING){
		cout << vaxel / HUNDRING << "st 100-kr sedlar" << endl;
		vaxel = vaxel % HUNDRING;
	}

	if(vaxel >= FEMTIOLAPP){
		cout << vaxel / FEMTIOLAPP << "st 50-kr sedlar" << endl;
		vaxel = vaxel % FEMTIOLAPP;
	}

	if(vaxel >= TJUGA){
		cout << vaxel / TJUGA << "st 20-kr sedlar" << endl;
		vaxel = vaxel % TJUGA;
	}

	if(vaxel >= TIA){
		cout << vaxel / TIA << "st 10-kr mynt" << endl;
		vaxel = vaxel % TIA;
	}

	if(vaxel >= FEMMA){
		cout << vaxel / FEMMA << "st 5-kr mynt" << endl;
		vaxel = vaxel % FEMMA;
	}

	if(vaxel >= KRONA){
		cout << vaxel << "st 1-kr mynt" << endl;
	}

	return 0;
}
