/*
*  Exercise from book
*  C++ Direkt by Jan Skansholm
*  http://skansholm.com
*
*  Sida 140 - Uppgift 4:13
*  Gör samma sak som i uppgift 4:12, men använd
*  string-variabler i stället för char * .
*  Används referensparametrar som refererar till
*  konstanter.
*/

#include <iostream>

using namespace std;

int check_substring(string &t1, string &t2);
void print_substring(string t1, string t2);

int main()
{
    print_substring("alla ba", "Hejsan alla barn!");
    print_substring("clown", "I'm an evil clown-nosed guy!");
    print_substring("rainbow", "Blackest night");

    return 0;
}

/* Check if t1 is a substring of t2 */
int check_substring(string &t1, string &t2)
{
    int len_1 = t1.length();
    int len_2 = t2.length();

    for(int i = 0; i < len_2 - len_1; i++)
    {
        if(t2.substr(i, len_1) == t1) // Strings match
        {
            return i;
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