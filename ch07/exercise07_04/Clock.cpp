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
#include <iomanip>
#include "Clock.h"

using namespace std;

void Clock::set(int hour, int minute, int second)
{
    h = hour;
    m = minute;
    s = second;
}

void Clock::print(bool show_seconds)
{
    cout << setw(2) << setfill('0') << h << ':' <<
            setw(2) << setfill('0') << m;

    if(show_seconds)
    {
        cout << ':' << setw(2) << setfill('0') << s;
    }
}

void Clock::tick(void)
{
    s = (s + 1) % 60;

    if(!s)
    {
        m = (m + 1) % 60;

        if(!m)
        {
            h = (h + 1) % 24;
        }
    }
}

/**
 * Increase the clock by seconds
 * @param inc Seconds to increase clock by
 */
void Clock::tick(int inc)
{
    if(inc >= 0)
    {
        while(inc--)
        {
            tick();
        }
    }
}

int Clock::get_hour(void)
{
    return h;
}

int Clock::get_minute(void)
{
    return m;
}

int Clock::get_second(void)
{
    return s;
}
