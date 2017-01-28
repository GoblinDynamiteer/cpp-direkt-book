/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 102
 *  In: Textfil best�ende av flera rader
 *  Ut: Antal bokst�ver, siffror, �vriga tecken
 *
 *  Omdirigera cin med applikation < textfil.txt
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
	string text;
	int cLetter = 0, cNum = 0, cMisc = 0;

	/*	getline returns true while
		read is successful 	*/
	while(getline(cin, text)){
		for(int i = 0 ; i < text.size(); i++){
			/*	Counts letters 	*/
			if(isalpha(text[i])){
				cLetter++;
			}
			/*	Counts digits 	*/
			else if(isdigit(text[i])){
				cNum++;
			}
			/*	Counts not-digits/letters 	*/
			else{
				cMisc++;
			}
		}
	}

	/*	Print numbers of different
		chars found in text file 	*/
	cout << "Bokst�ver: " << cLetter << endl <<
		"Siffror: " << cNum << endl <<
		"�vriga: " << cMisc;
	return 0;
}
