/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Page 257 - Exercice 7.1
 *      Create a class: Counter, which counts an integer up or down.
 *      Constructor shall take max and min value of counter, and start value.
 *      If a faulty start value is given, display error message.
 *      Value of counter shall be readable
 *
 *  @member     v       Counter integer value
 *  @member     min     Counter min value
 *  @member     max     Counter max value
 *  @method     up      Increase counter value by one
 *  @method     down    Decrease counter value by one
 *
 */

#include <iostream>
#include "Counter.h"

using namespace std;

int main()
{
    int start = 30, min = -30, max = 100;

    Counter counter = Counter(start, min, max);

    cout << "Setting counter: " << endl <<
        " start: " << start << endl <<
        " min:   " << min << endl <<
        " max:   " << max << endl;

    cout << "Increasing counter 3000 times." << endl;

    for (int i = 0; i < 3000; i++)
    {
        counter.increase();
    }

    /* Should be max value */
    cout << "Counter = " << counter.get_value();

    return 0;
}
