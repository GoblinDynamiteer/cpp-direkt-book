/*
*  Exercise from book
*  C++ Direkt by Jan Skansholm
*  http://skansholm.com
*
*  Sida 139 - Exercise 4:6
*  Skriv en funktion "upphoj" som beräknar x^y (reella tal)
*  anänd x^y = e^y*ln(x)
*/

#include <iostream>
#include <math.h>
using namespace std;

#define MIN_VAL 1.0e-7

double powxy(double x, double y);

int main()
{
    double x = 3, y = 4;
    cout << x << "^" << y << " = " << powxy(x, y) << endl;
    cout << "math.h: " << pow(x, y);

    return 0;
}

/* Power of */
double powxy(double x, double y)
{
    double expo = y * log(x);
    return exp(expo); // func exp = e^x
}
