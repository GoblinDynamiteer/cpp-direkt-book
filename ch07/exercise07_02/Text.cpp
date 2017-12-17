/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Page 257 - Exercice 7.2
 *      Add to class Text (page 246):
 *
 *  @method     change_char     Change specific char in text
 *  @method     read_char       Read specific char in text
 *  @method     length          Return text length
 *
 */

#include "Text.h"
#include <cstring>
#include <cassert>

Text::Text(int n)
{
    assert(n >= 0);
    len = n;
    p = new char[len + 1];

    for(int i = 0; i < len; i++)
    {
        p[i] = ' ';
    }

    p[len] = '\0';
}

Text::Text(char *s)
{
    len = strlen(s);
    p = new char[len + 1];
    strcpy(p, s);
}

void Text::change_char(int index, char c)
{
    return;
}

char Text::read_char(int index)
{
    return '0';
}

int Text::length(void)
{
    return 0;
}
