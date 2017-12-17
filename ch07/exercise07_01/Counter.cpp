/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Page 257 - Exercice 7.6
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

#include "Counter.h"
#include <iostream>

/**
 * Constructor for counter
 * @param start_value Counter start value
 * @param min         Counter min value
 * @param max         Counter max value
 */
Counter::Counter(
    int start_value, int min, int max) : min(min), max(max)
{
    if(start_value > max || start_value < min)
    {
        std::cout << "Counter: wrong start value!" << std::endl;
        v = 0;
    }

    else
    {
        v = start_value;
    }
}

/**
 * Increase counter by one
 */
void Counter::increase(void)
{
    v = v + 1 > max ? v : v + 1;
}

/**
 * Decrease counter by one
 */
void Counter::decrease(void)
{
    v = v - 1 < min ? v : v - 1;
}

/**
 * Get current counter value
 * @return  Counter value
 */
int Counter::get_value(void)
{
    return v;
}
