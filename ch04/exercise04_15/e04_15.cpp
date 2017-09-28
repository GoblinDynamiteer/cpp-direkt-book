/*
*  Exercise from book
*  C++ Direkt by Jan Skansholm
*  http://skansholm.com
*
*  Sida 140 - Uppgift 4:15
*  Skriv en funktion som avgör om två
*  heltalsarrayer är lika.
*  parametrar: 
*    två arrayer, två heltal som anger arraylängder
*/

#include <iostream>

template<class T, size_t N>
constexpr size_t size(T (&)[N]) { return N; }

using namespace std;

bool compare_arrays(
    int * a1, int * a2, int a1_len, int a2_len);

int main()
{
    char l[4] = {'a', 'b', 'c', 'd'};

    int a[] = { 2, 3, 4, 5, 6, 7, 12 };
    int b[] = { 2, 3, 4, 5, 6, 7, 12 };
    int c[] = { 2, 3, 4, 5, 6, 7 };
    int d[] = { 99, 3, 4, 5, 6, 7, 12, 14 };

    int * ar[4] = { a, b, c, d };

    int s[4] = {
        sizeof(a) / sizeof(int),
        sizeof(b) / sizeof(int),
        sizeof(c) / sizeof(int),
        sizeof(d) / sizeof(int)
    };


    for(int i = 0; i < 3; i++)
    {
        cout << "Arrays " << l[i] << "==" << l[i+1] << "="  
            << (compare_arrays(
                ar[i], 
                ar[i+1],
                s[i],
                s[i+1]) ? 
                    "true" : "false") << endl;

    }
    return 0;
}


bool compare_arrays(
    int * a1, int * a2, int a1_len, int a2_len)
{
    if(a1_len != a2_len) return false;

    for(int i = 0; i < a1_len; i++)
    {
        if(a1[i] != a2[i])
        {
            return false;
        }
    }

    return true;
}
