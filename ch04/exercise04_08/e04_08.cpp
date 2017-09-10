/*
*  Exercise from book
*  C++ Direkt by Jan Skansholm
*  http://skansholm.com
*
*  Sida 140 - Uppgift 4:8
*  Beräkna kvadratroten till ett tal x med Newtons Metod:
*  1. Gissa ett tal g >= 0
*  2. tal h. h * g = x -- > h = x / g
*  3. om h ~~ g så har man lösningen, annars ny gissning:
*    g-ny = (g+(x/g)) / 2
*  4. Repetera tills skillnad mellan g och h är < 10e-6
*/

#include <iostream>
#include <math.h>
using namespace std;

#define MIN_VAL 1.0e-6

double sqrt_newton(double x);

int main()
{
    double x = 92756;

    cout << "Square root of " << x << " is " << sqrt_newton(x) << endl;
    cout << "math.h: " << sqrt(x);

    return 0;
}

/* Calculate square root of x */
double sqrt_newton(double x)
{
    double g = x / 2; // guess
    double h = x / g;

    while (fabs(g - h) > MIN_VAL)
    {
        g = (g+(x/g)) / 2;
        h = x / g;
    }

    return h;
}
