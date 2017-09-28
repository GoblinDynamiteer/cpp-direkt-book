/*
*  Exercise from book
*  C++ Direkt by Jan Skansholm
*  http://skansholm.com
*
*  Sida 140 - Uppgift 4:12
*  Skriv en funktion som tar två textsträngar t1 och t2.
*  Undersök om t1 finns som delsträng i t2.
*  Om så är fallet: ange indexposition, annars -1;
*/

#include <iostream>

using namespace std;

int check_substring(string t1, string t2);
void print_substring(string t1, string t2);

int main()
{
    print_substring("alla ba", "Hejsan alla barn!");
    print_substring("clown", "I'm an evil clown-nosed guy!");
    print_substring("rainbow", "Blackest night");

    return 0;
}

/* Check if t1 is a substring of t2 */
int check_substring(string t1, string t2)
{
    int len_t1 = t1.length();

    for(int i = 0; i < t2.length(); i++)
    {
        if(t1[0] == t2[i]) // Character match
        {
            int j = 1;
            
            /* While chars match */
            while(t1[j] && t1[j] == t2[i+j])
            {
                j++;
                if(j == len_t1) // Reached substring end
                {
                    return i; // Index of found substring
                }
            }
                 
        }
    }

    return -1;
}

/* Console printout */
void print_substring(string t1, string t2)
{
    int sub_index = check_substring(t1, t2);

    cout    << endl << "String:    " << t2 << endl 
            << "Substring: " << t1 << endl
            << "-----------------------------------------" << endl; 

    if(sub_index >= 0)
    {
        cout    << "Substring found!" << endl;
        cout    << ">>> " << t2.substr(0, sub_index) 
                << "|" << t2.substr(sub_index, t1.length()) << "|"
                << t2.substr(sub_index + t1.length()) << endl;
    }

    else
    {
        cout << "Substring not found!";
    }

}