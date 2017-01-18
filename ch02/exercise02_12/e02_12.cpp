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
 *  	(x är vinkel i radianer om ska testas med miniräknare)
 *  	5! = 5*4*3*2*1 = 120 = 5*4!

 */



/*	Takes x as angle in degrees, outputs sin(x)
 *	Taylor / MacLaurin series works for radians. */
#include <iostream>
#include <cmath>
#include <iomanip>
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
	return calc;
}


int main(){
	double x, inputx, term = 1, sum;
	cout << "Ange grader x: ";
	cin >> x;
	/*	 Convert x to radians	*/
	inputx = x;
	x = sum = x * M_PI/180;
	int p = 3;
	bool posNeg = 0;
	while(fabs(term) >= MIN){
		term = powerOf(x, p)/factor((double)p);
		if(!posNeg){
			sum -= term;
		}
		else{
			sum += term;
		}
		posNeg = !posNeg;
		p += 2;
	}
	cout << "sin(" << inputx << " deg) = " << fixed << setprecision(4) << sum;
	return 0;
}

