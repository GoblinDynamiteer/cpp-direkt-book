/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 66
 *  Vektorlängd
 *	In: Godtyckligt antal element, typ double
 *	Ut: Matematisk vektorlängd:
 *		l = sqrt(v1^2+v2^2+...+vn^2)
 *	Ska sparas i datatyp vector
 */

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int size = 0;
	double n, l = 0.0;
	vector<double> v;
	while(1){
		cout << "Ange tal (CTRL-Z avbryter): ";
		if(!(cin >> n)){
			break;
		}
		/*	 Increase elements by one	*/
		v.resize(size+1);
		v[size] = n;
		size++;
	}

	/*	 Get length for (math) vector	*/
	for(int i = 0; i < size; i++){
		l += pow(v[i], 2);
	}
	l = sqrt(l);
	cout << "Vektorlängd: " << l;
	return 0;
}
