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

#include "Clock.h" // Class to test
#include "unity.h"

void test_clock_class_set(void)
{
    Clock c;
    c.set(5, 30, 23);

    TEST_ASSERT_EQUAL(5, c.get_hour());
    TEST_ASSERT_EQUAL(30, c.get_minute());
    TEST_ASSERT_EQUAL(23, c.get_second());
}

void test_clock_class_tick(void)
{
    Clock c;
    c.set(5, 30, 23);
    c.tick();

    TEST_ASSERT_EQUAL(23 + 1, c.get_second());

    c.set(1, 2, 50);
    c.tick(30);

    TEST_ASSERT_EQUAL(2  + 1, c.get_minute());
    TEST_ASSERT_EQUAL(20, c.get_second());

    c.set(1, 2, 50);
    c.tick(-30);

    TEST_ASSERT_EQUAL(50, c.get_second());
}


int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_clock_class_set);
    RUN_TEST(test_clock_class_tick);

    return UNITY_END();
}
