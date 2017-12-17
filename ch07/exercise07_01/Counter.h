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

#include <climits>

class Counter
{
    public:
        Counter(
            int start_value = 0,
            int min = INT_MIN,
            int max = INT_MAX);

        int get_value(void);
        void increase(void);
        void decrease(void);

    private:
        int v;
        int max;
        int min;
};
