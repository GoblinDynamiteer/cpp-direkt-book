/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 101
 *  In: Ord till teckenfält s1
 * 	Kopiera s1 till s2 i omvänd ordning,
 * 	använd inte strcpy
 */

#include <iostream>
#include <iomanip>	//setw()
#include <cstring> //strlen()
using namespace std;

#define STRING_SIZE 50

int main(){
	char s1[STRING_SIZE], s2[STRING_SIZE];
	cout << "Skriv s1: ";

	/*	setw works for cin, limits amount
		of characters for next input 	*/
	cin >> setw(STRING_SIZE);

	/*	Reads STRING_SIZE chars to string s1 	*/
	cin.getline(s1, STRING_SIZE);

	/*	 Copy chars in s1 to s2, backwards,
			strlen(s1)-1 : arrays start at zero! 	*/
	for(int i = 0, j = strlen(s1)-1 ; i < strlen(s1); ){
		s2[i++] = s1[j--];
	}

	/*	Set null terminator 	*/
	s2[strlen(s1)] = '\0';

	/*	Prints the two strings 	*/
	cout << "s1: \"" << s1 << "\"" << endl;
	cout << "s2: \"" << s2 << "\"" << endl;

	return 0;
}
