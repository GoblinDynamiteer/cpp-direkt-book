/*
*  Exercise from book
*  C++ Direkt by Jan Skansholm
*  http://skansholm.com
*
*  Sida 139 - Exercise 4:7
*  Beräkna största gemensamma divisorn mha
*
*  Euclides algoritm:
*  heltal m, n
*  1 - dividera m med n, rest = r
*  2 - om r = 0, resultat i n
*  3 - annars m = n, n = r. Gå till steg 1
*/

#include <iostream>
#include <math.h>
using namespace std;

#define MIN_VAL 1.0e-7

int sgd(int m, int n);

int main()
{
    int m = 2592, n = 75672;
    cout << "Largest common divider for " << m << " and "
         << n << ": " << sgd(m, n);
    return 0;
}

/* Find largest common divider */
int sgd(int m, int n)
{
    int r = m % n;
    return r ? sgd(n, r) : n;
}
