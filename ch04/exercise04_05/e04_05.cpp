/*
*  Exercise from book
*  C++ Direkt by Jan Skansholm
*  http://skansholm.com
*
*  Sida 139 - Exercise 4:5
*  Skriv en funktion för att beräkna värdet av e^x
*  Använd nedanstående Maclaurin-serie
*  e^x = 1 + (x/1!) + (x^2/2!) + (x^3/3!) ....
*  Använd inte termer som är mindre än 10e-7
*/

#include <iostream>
#include <math.h>
using namespace std;


#define MIN_VAL 1.0e-7

double epowx(int x);
int nfak(int n);
double expo(double x);

int main()
{
    int x = 10;
    cout << "e^" << x << " = " << epowx(x) << endl;
    cout << "math.h: " << pow(M_E, x);

    return 0;
}

/*	Calculate e^x	*/
double epowx(int x)
{
    double sum = 0.0;
    double add = 1.0;
    int i = 1;

    while(1)
    {
        if(add < MIN_VAL)
        {
            break;
        }

        sum += add;
        i++;
        add = add * x / i;
    }

    return sum;
}
