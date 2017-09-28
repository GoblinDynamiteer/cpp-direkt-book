/*
*  Exercise from book
*  C++ Direkt by Jan Skansholm
*  http://skansholm.com
*
*  Sida 140 - Uppgift 4:14
*  Läs in en fil kodad med rövarspråket, skriv ut
*  texten i klartext.
*  Dirigera om cin med app.exe < textfil.txt
*/

#include <iostream>

using namespace std;

void decode_rovar(string s);

int main()
{
    string buffer, text = "";

    /* Read redirected cin from textfile */
    while(getline(cin, buffer)) 
    {
        text += buffer;
    }
    
    decode_rovar(text);
    return 0;
}

/* Print decoded "Rövarspråket"-text */
void decode_rovar(string s)
{
    /* consonants */
    string con = "bcdfghjklmnpqrstvwxz";

    for(int i = 0; i < s.length(); i++)
    {
        if( con.find_first_of(tolower(s[i])) != -1 && 
            tolower(s[i+1]) == 'o')
        {
            i += 2;
        }

        cout << s[i];
    }
}
