/*
*  Exercise from book
*  C++ Direkt by Jan Skansholm
*  http://skansholm.com
*
*  Sida 140 - Uppgift 4:9
*  L�gg funktioner fr�n �vningar 1-8 i en egen fil.
*  Inkludera och anv�nd minst tv� av funktionerna.
*/

#include <iostream>
#include "math_func.h"

using namespace std;

int main()
{
    double x = 92756;
    cout << "Square root of " << x << " is " << sqrt_newton(x) << endl;

    int e = 12;
    cout << "e^" << e << " = " << epowx(e);


    return 0;
}
