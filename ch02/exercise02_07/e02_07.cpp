/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 64
 *
 *  Beräkna avståndet mellan två koordinater!
 *
 *  In: x1, x2, y1, y2
 *  Ut: Avståndet
 */

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

typedef struct coord{
	int x, y;
}pos;

int main(){
	pos pos1, pos2;

	/*	 Input of coordinates	*/
	cout << "Ange x1: ";
	cin >> pos1.x;
	cout << "Ange y1: ";
	cin >> pos1.y;
	cout << "Ange x2: ";
	cin >> pos2.x;
	cout << "Ange y2: ";
	cin >> pos2.y;

	/*	 Calculate distance	*/
	 double distance =
		sqrt(
		pow(pos1.x - pos2.x, 2) +
		pow(pos1.y - pos2.y, 2)
	);

	/*	 Printout	*/
	cout << "Avstånd: " << fixed << setprecision(2) << distance;
	return 0;
}
