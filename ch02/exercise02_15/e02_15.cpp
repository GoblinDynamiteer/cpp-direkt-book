/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 65
 *
 *  Primtal
 *  Ut: Tabell med de första 50 primtalen
 *
 *  Använd gärna en vektor.
 */

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

#define MAX_NUMBERS 50

int main(){
	/*	 Vector with 50 int elements	*/
	vector<int> prime(MAX_NUMBERS);
	int checkPrime = 2;
	prime[0] = checkPrime;
	for(int i = 1; i < MAX_NUMBERS;){
		checkPrime++;
		bool isPrime = 1;
		for(int j = 0; j < i; j++){
			if(checkPrime % prime[j] == 0){
				isPrime = 0;
			}
		}
		if(isPrime){
			prime[i++] = checkPrime;
		}
	}

	/*	 Outputs prime numbers 1-50	*/
	int count = 1;
	/*	 Simplified for loop, p gets the value in each element	*/
	for (int p : prime){
		cout << "Prime " << setw(2) << fixed
				<< count++ << "\t" << setw(3) << p << endl;
	}
	return 0;
}

