/*
*  Exercise from book
*  C++ Direkt by Jan Skansholm
*  http://skansholm.com
*
*  Sida 140 - Uppgift 4:16
*  Skriv en funktion som roterar värdena
*  i en heltalsarray n steg åt höger.
*  Sista index hamnar först.
*/

#include <iostream>

using namespace std;

void rotate_array(int * a, int l, int n);
void print_array(int * a, int l);

int main()
{
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = sizeof(array) / sizeof(int);

    cout << "Before: "; print_array(array, size);
    rotate_array(array, size, 3);
    cout << "After:  "; print_array(array, size);
    return 0;
}

void rotate_array(int * a, int l, int n)
{
    int last;

    while(n--) // While number of rotations
    {
        last = a[l-1]; // Keep last value

        /* Backwards */
        for(int i = l-1; i >= 0; i--)
        {
            /* Index gets value of index before */
            a[i] = a[i-1]; 
        }
        
        a[0] = last; // First index gets kept last value
    }
}

void print_array(int * a, int l)
{
    for(int i = 0; i < l; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}
