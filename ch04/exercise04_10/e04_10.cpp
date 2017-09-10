/*
*  Exercise from book
*  C++ Direkt by Jan Skansholm
*  http://skansholm.com
*
*  Sida 140 - Uppgift 4:10
*  Skriv en funktion som kontrollerar om en sträng är ett
*  giltigt variabelnamn i C++. (Se sida 21)
*  Läs in en rad från kommandofönstret, använd funktionen för att kontrollerar
*  hur många ord som är giltiga! Orden separeras med mellanslag.
*/

#include <iostream>

bool valid_var_name(char * name);

using namespace std;

int main()
{
    char input[200];
    int count = 0;

    cout << "Enter words: ";

    while(cin.peek() != '\n')
    {
        cin >> input;

        /* Skip while next char is space */
        while (cin.peek() == ' ')
        {
            cin.ignore();
        }

        cout << "Checking word: " << input;

        if(valid_var_name(input))
        {
            cout << ": valid!" << endl;
            count++;
        }

        else
        {
            cout << ": invalid!" << endl;
        }
    }

    cout << count << " valid variable names found!" << endl;

    return 0;
}

/* Check if string is valid variable name in C++ */
bool valid_var_name(char * name)
{
    bool retval = true;

    for (int i = 0; name[i] != '\0'; i++)
    {
        if(!(   (name[i] >='a' && name[i]<='z') ||
                (name[i] >='A' && name[i]<='Z') ||
                (name[i] >='0' && name[i]<='9' && i > 0) ||
                (name[i] == '_' )   )
            )
            {
                retval = false;
            }
    }

    return retval;
}
