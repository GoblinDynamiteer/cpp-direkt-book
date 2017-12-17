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

#include "Counter.h" // Class to test
#include "unity.h"

void test_counter_class(void)
{
    int v = 30, max = 60, min = 20;
    Counter c1 = Counter(v, min, max);
    TEST_ASSERT_EQUAL(v, c1.get_value());

    /* Increase counter max * 2 times */
    for(int i = 0; i < max * 2; i++)
    {
        c1.increase();
    }

    TEST_ASSERT_EQUAL(max, c1.get_value());

    /* Decrease counter max * 4 times */
    for(int i = 0; i < max * 2; i++)
    {
        c1.decrease();
    }

    TEST_ASSERT_EQUAL(min, c1.get_value());

    v = 50;
    max = 30;

    Counter c2 = Counter(v, max, min);

    TEST_ASSERT_EQUAL(0, c2.get_value());

    Counter c3 = Counter(v);
    TEST_ASSERT_EQUAL(v, c3.get_value());

    /* Decrease counter 3000 times */
    for(int i = 0; i < 3000; i++)
    {
        c3.decrease();
        v--;
    }

    TEST_ASSERT_EQUAL(v, c3.get_value());

}

int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_counter_class);

    return UNITY_END();
}
