/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Page 257 - Exercise 7.5
 *      Create a class Point that stores a point in a 2D coordination system.
 *
 *  @method     distance     Calculates distance object point and another point
 *
 */

#include "Point.h" // Class to test
#include "unity.h"

void test_point_class(void)
{
    Point a = Point(12.4, 44.1);
    TEST_ASSERT_EQUAL(12.4, a.get_x_pos());
    TEST_ASSERT_EQUAL(44.1, a.get_y_pos());
}

void test_point_class_distance(void)
{
    Point a = Point(12.4, 44.1);
    Point b = Point(33.9, -12.1);

    TEST_ASSERT_EQUAL_FLOAT(60.1722, a.distance(b));
}


int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_point_class);
    RUN_TEST(test_point_class_distance);

    return UNITY_END();
}
