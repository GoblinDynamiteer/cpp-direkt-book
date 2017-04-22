/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 139
 *  Skriv en funktion som beräknar ett heltals tecken.
 *	Returvärden:
 *		Om talet > 0 retur 1
 *		Om talet < 0 retur -1
 *		Om talet = 0 retur 0
 */

#include <iostream>
using namespace std;

int checkVal(int n);

int main(){
	/*	Test function 	*/
	int check[5] = {-30, 40, 0, 1001, -123};
	for(int i = 0; i < 5; i++){
		cout << check[i] << ":  " << checkVal(check[i]) << endl;
	}
	return 0;
}

int checkVal(int n){
	if (n == 0){	return 0;	}
	if (n > 0){		return 1;	}
	return -1;
}
