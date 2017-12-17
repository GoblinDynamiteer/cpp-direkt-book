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

/**
 * Change character in text at index
 * @param index Index
 * @param c     New character
 */
void Text::change_char(int index, char c)
{
    if(index <= len && index >= 0)
    {
        p[index] = c;
    }
}

/**
 * Return character at index
 * @param  index Index
 * @return       Char
 */
char Text::read_char(int index)
{
    if(index <= len && index >= 0)
    {
        return p[index];
    }

    return p[0];
}

/**
 * Get Text length
 * @return  Text length
 */
int Text::length(void)
{
    return len;
}
