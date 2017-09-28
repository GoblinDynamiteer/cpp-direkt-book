/*
*  Exercise from book
*  C++ Direkt by Jan Skansholm
*  http://skansholm.com
*
*  Sida 141 - Uppgift 4:20
*  Skriv en funktion som skriver utt ett positivt heltal
*  till binär form.
*/

#include <iostream>
#include <stdlib.h> /* srand, rand */
#include <time.h> /* time */

using namespace std;

void print_binary(int n);

int main()
{
    srand(time(NULL));
    int decimal;

    for(int i = 0; i < 10; i++)
    {
        decimal = rand() % 50000 + 1;
        cout << "Decimal: " << decimal << endl;
        cout << "Binary:  "; print_binary(decimal); cout << endl;
        cout << "------------------------------------" << endl;
    }

    return 0;
}

/* Print out binary value of n */
void print_binary(int n)
{
    string bin;

    while(n)
    {
        bin += (n % 2) ? "1" : "0";
        n /= 2;
    }

    /* Leading zeroes */
    int zero = 0;
    while((bin.length() + zero++) % 4)
    {
        cout << "0";
    }

    /* Reverse */
    for(int i = bin.length()-1; i >= 0; i--)
    {
        cout << bin[i];
        cout << (i % 4 ? "" : " "); // Spaces every 4 digit
    }
}
