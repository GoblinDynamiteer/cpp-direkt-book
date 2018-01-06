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

#ifndef CLOCK_CLASS_H
#define CLOCK_CLASS_H

class Clock
{
    public:
        void set(int hour, int minute, int second);
        int get_hour(void);
        int get_second(void);
        int get_minute(void);
        void print(bool show_seconds = true);
        void tick(void);
        void tick(int inc);

    private:
        int h, m, s;
};

#endif
