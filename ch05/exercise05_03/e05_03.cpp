/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Page 196 - Exercice 5:03
 *  Build a function that reverses a char array with the help of two pointers:
 *  @param s Pointer to string
 */

#include <iostream>
#include <cstring>
using namespace std;

void char_array_reverse(char * s);
void char_swap_chars(char * c1, char * c2);

int main()
{
    /* Test strings */
    char str[][300] = {
        "STRING TO REVERRRRRSE!",
        "ABCDEFGHJIKLMADSAZ!",
        "JOHAN! ;D",
        "ParissiraP"
    };

    cout << "Reversed strings: " << endl;
    for(int i = 0; i < (sizeof(str) / sizeof str[0]); i++)
    {
        cout << str[i] << " : ";
        char_array_reverse(str[i]);
        cout << str[i] << endl;
    }

	return 0;
}

/**
 * Reverses a char array
 * @param s Char array pointer
 */
void char_array_reverse(char * s)
{
    char *p = s + strlen(s) - 1;
    for(; s<p; s++, p--)
    {
        char_swap_chars(s,p);
    }
}

/**
 * Swaps content of two char pointers
 * @param c1 Char pointer 1
 * @param c2 Char pointer 2
 */
void char_swap_chars(char * c1, char * c2)
{
    char temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}
