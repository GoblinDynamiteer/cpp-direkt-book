/*
*  Exercise from book
*  C++ Direkt by Jan Skansholm
*  http://skansholm.com
*
*  Sida 140 - Uppgift 4:11
*  Skriv en funktion som undersöker hur många små
*  respektive stora bokstäver (a-z & A-Z) det finns
*  i en given text-sträng. Resultatet ska ges i två
*  utparametrar.
*/

#include <iostream>

using namespace std;

void calc_letters(string s, int * upper, int * lower);

int main()
{
    string tester = "Hejsan Alla!";
    int count_lower, count_upper;

    calc_letters(tester, &count_upper, &count_lower);

    cout<< "String: \"" << tester << "\"" << endl 
        << "Lowercase: " << count_lower << endl
        << "Uppercase " << count_upper << endl;

    return 0;
}

/* Calculate number of upper and lowercase characters in a string */
void calc_letters(string s, int * upper, int * lower)
{
    *upper = 0;
    *lower = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(!isalpha(s[i]))  i++;  // Skip non-alphabetical
        if(islower(s[i]))   (*lower)++;
        if(isupper(s[i]))   (*upper)++;
    }

    return;
}