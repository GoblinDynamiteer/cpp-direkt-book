/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Page 257 - Exercise 7.4
 *      Class clock on page 218/222: add method to
 *      increase the time an arbitrary amount of seconds
 *
 *  @method     tick     Increase time x seconds
 *
 */

#include <iostream>
#include "Clock.h"

using namespace std;

int main()
{
    Clock c;
    c.set(12, 30, 55);

    cout << "Clock is now: ";
    c.print();

    cout << endl << "<< increasing by 1235 seconds >>";

    c.tick(1235);
    cout << endl << "Clock is now: ";
    c.print();

    return 0;
}
