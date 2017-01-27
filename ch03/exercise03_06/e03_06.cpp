/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 102
 *  In: Textfil bestående av flera rader
 *  Ut: Det genomsnittliga antalet
 *  		tecken per rad
 *
 *  Omdirigera cin med applikation < textfil.txt
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
	string text;
	int numLines = 0, numChars = 0;

	/*	getline returns true while
		read is successful 	*/
	while(getline(cin, text)){
		numLines++;
		numChars += text.size();
	}

	/*	Average number of letters per line 	*/
	cout << "Genomsnittligt antal tecken per rad: "
		<< numChars / numLines << endl;

	return 0;
}
