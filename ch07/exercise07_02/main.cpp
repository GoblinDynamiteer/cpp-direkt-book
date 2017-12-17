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

#include <iostream>
#include "Text.h"

using namespace std;

int main()
{
    char string[] = "I am a Text!";
    Text text = Text(string);

    cout << "Text before manipulation: " << endl;

    for(int i = 0; i < text.length(); i++)
    {
        cout << text.read_char(i);
        text.change_char(i, 'A' + i);
    }

    cout << endl << "Text after manipulation: " << endl;

    for(int i = 0; i < text.length(); i++)
    {
        cout << text.read_char(i);
    }

    return 0;
}
