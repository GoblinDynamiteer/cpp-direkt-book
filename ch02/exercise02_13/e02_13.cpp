/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 65
 *
 *  Heltal n1->n2
 *  In: heltal n1 och n2
 *  Ut: n & n^3 i spannet n1->n2
 *
 *  Använd for-loop
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n1, n2;
	cout << "Ange tal 1: ";
	cin >> n1;
	cout << "Ange tal 2: ";
	cin >> n2;
	for(;n1 <= n2; n1++){
		 cout << n1 << "\t" << pow(n1,3) << endl;
	}
	return 0;
}
