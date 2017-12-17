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
#include <string.h>
using namespace std;

bool string_copy(char * s1, char * s2, int l)
{
    if(strlen(s1) > l)
    {
        return false;
    }

    for(int i = 0; i < l; i++)
    {
        s2[i] = s1[i];
    }

    return true;
}
