/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 64
 *
 *  Beräkna sin(x) med Maclaurin-serie
 *
 *  In: x
 *  Ut: sin(x) med 4 decimaler
 *
 *  Data:
 *  	Tag inte med termer i summan mindre än 10^-5
 *  	sin(x) = x - (x^3/3!) + (x^5/5!) - (x^7/7!)
 *  	5! = 5*4*3*2*1 = 120 = 5*4!
 */



/*	 NOT SOLVED	- DIDNT FIX THE MATH	*/
#include <iostream>
#include <cmath>
using namespace std;

#define MIN 1.0e-5

/*	 Power of: n^p	*/
double powerOf(const double n, const int p){
	double calc = n;
	for(int i = 0; i < p-1; i++){
		calc *= n;
	}
	return calc;
}

/*	 Factorial	*/
double factor(const double n){
	double calc = 1;
	for(int i = n; i > 1; i--){
		calc *= i;
	}
	cout << "factorial" << n << " = " << calc << endl;
	return calc;
}


int main(){
	double x, inputx, term = 1, sum;
	cout << "Ange x: ";
	cin >> x;
	inputx = sum = x;
	int p = 3;
	bool posNeg = 0;
	while(fabs(term) >= MIN){
		term = powerOf(x, p)/factor(p);
		cout << "sum: " << sum << endl;
		cout << "term: " << term << endl;
		if(!posNeg){
			cout << "------" << endl;
			sum -= term;
			posNeg = !posNeg;
		}
		else{
			sum += term;
			posNeg = !posNeg;
			cout << "+++++" << endl;
		}

		p += 2;
	}
	cout << "sin(" << inputx << ") =" << sum;
	return 0;
}

