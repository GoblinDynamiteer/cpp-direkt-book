/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Page 197 - Exercice 5:06
 *      Write a function that copies a string to another string.
 *      Make sure that string is not written outside of target string length,
 *      what is a good way to tell if the string was copied correctly?
 *  @param s1   String 1 (source)
 *  @param s2   String 2 (target)
 *  @param l    String 2 length
 *  @return     Bool success
 */

#include <iostream>
#include "func.h"
using namespace std;

int main()
{
    char string_from[] = "HELLO";
    char string_to[30] = "HI";

    if(string_copy(string_from, string_to, 30))
    {
        cout << "HELLO!";
    }

    return 0;
}
