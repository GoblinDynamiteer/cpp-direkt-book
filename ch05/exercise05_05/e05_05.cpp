/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Page 197 - Exercice 5:05
 *  In math: A vectors (v) length is calculated with:
 *      l = sqrt(v1^2 + v2^2 + v3^2 + vn^2)
 *  Write a function that calculates the lenght of a vector
 *  @param v vector values (array)
 *  @param n number of elements
 */

#include <iostream>
#include <cmath>
using namespace std;

double vector_length(double * v, int n);
double langd(double *v, int n);

int main()
{
    double vector_array[] = 
    {
        1.2, 1.3, 1.4, 2.2, 1.3, 4.5, 3.3, 5.2, 5.3, 4.2
    };

    int n = sizeof(vector_array) / sizeof(vector_array[0]);

    /* Check own func == Skansholm func */
    if(vector_length(vector_array, n) == langd(vector_array, n))
    {
        cout << "Correct soluton!" << endl;
    }

    else
    {
        cout << "Error - Wrong solution!" << endl;
    }

    cout << "Skansholm:  " << langd(vector_array, n) << endl;
    cout << "this:       " << vector_length(vector_array, n) << endl;
}

/* Calculate lenght from vector array v */
double vector_length(double * v, int n)
{
    double retval = 0.0f;

    while(n--)
    {
        retval += pow(*v++, 2);
    }

    return sqrt(retval);
}

/* Skansholm solution: http://skansholm.com/cpp_dir/losn-tredje/kap05/ex5-5.cpp */
double langd(double *v, int n)
{
   double l=0;
   for (double *p=v; p<v+n; p++)
   {
     l += *p * *p;
   }
   return sqrt(l);
}