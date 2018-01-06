/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Page 257 - Exercice 7.3
 *      Create a class: Person, create a constructor and suitable methods
 *
 *  @member     name            Person name (Use text class in prev ex.)
 *  @member     address         Person address (Use text class in prev ex.)
 *  @member     Age             Person age
 *
 */

#include <iostream>
#include "Text.h"
#include "Person.h"

using namespace std;

int main()
{
    char pname[] = "Charles", paddr[] = "Highstreet 12";
    Person p1 = Person(pname, paddr, 58);
    Text name = p1.get_name();
    Text addr = p1.get_address();

    cout << "Name: ";
    for(int i = 0; i < name.length(); i++)
    {
        cout << name.read_char(i);
    }

    cout << endl << "Address: ";
    for(int i = 0; i < addr.length(); i++)
    {
        cout << addr.read_char(i);
    }

    cout << endl << "Age: " << p1.get_age();

    return 0;
}
