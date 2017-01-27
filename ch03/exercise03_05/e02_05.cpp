/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 102
 *	In: ord
 *	Ut: �r ord palindrom?
 *
 *	Palindrom �r ord som �r lika framl�nges som bakl�nges
 *	Exempel:
 *		ada
 *		ni talar bra latin
 *		madam
 */

#include <iostream>
#include <iomanip>	//setw()
#include <cstring> //strlen()
using namespace std;

#define STRING_SIZE 50

int main(){
	char ord[STRING_SIZE];
	bool isPalindrome = true;
	cout << "Skriv ord: ";
	cin >> setw(STRING_SIZE);
	cin.getline(ord, STRING_SIZE);

	/*	Compares letters: starting at last and zero index	*/
	for(int i = 0, j = strlen(ord)-1; i < j; i++, j--){
		/*	Skip spaces 	*/
		if(ord[i] == ' '){
			i++;
		}
		if(ord[j] == ' '){
			j--;
		}
		/*	Break if not same letter
		 		set bool to false	*/
		if(tolower(ord[i]) != tolower(ord[j])){
			isPalindrome = false;
			break;
		}
	}

	if(isPalindrome){
		cout << "\"" << ord << "\" �r ett palindrom!";
	}
	else{
		cout << "\"" << ord << "\" �r inte ett palindrom!";
	}

	return 0;
}
