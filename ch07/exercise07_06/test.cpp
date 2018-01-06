/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Page 258 - Exercise 7.6
 *      Create a class PPoint that stores a point in a polar coordinate system.
 *      (Distance from origo, and angle)
 *
 *  Add a constructor to class Point (previous exercise), that converts a
 *  polar coordinate to a regular (cartesian point).
 *
 *  Conversion:
 *      x = r * cos a
 *      y = r * sin a
 *  where r is distance from origo and a is angle
 */

#include <cmath>
#include "Point.h"
#include "PPoint.h"
#include "math_func.h"
#include "unity.h"

void cos_sin(void)
{
    TEST_ASSERT_EQUAL(-1, cos_deg(180));
    TEST_ASSERT_EQUAL(0.83867056794, cos_deg(33));
    TEST_ASSERT_EQUAL(0.29020116735, cos_deg(-73.13));

    TEST_ASSERT_EQUAL(0, sin_deg(180));
    TEST_ASSERT_EQUAL(0.54463903501, sin_deg(33));
    TEST_ASSERT_EQUAL(-0.9569656642, sin_deg(-73.13));
}

void ppoint(void)
{
    PPoint p1 = PPoint(13.5, 184);
    TEST_ASSERT_EQUAL(13.5, p1.get_distance());
    TEST_ASSERT_EQUAL(184, p1.get_angle());
}

/**
 * Test Polar point to point constructor
 */
void pp_to_p_conv(void)
{
    PPoint p1 = PPoint(5.6, 33);
    Point p2 = Point(p1);

    TEST_ASSERT_EQUAL(4.69656, p2.get_x_pos());
    TEST_ASSERT_EQUAL(3.04998, p2.get_y_pos());

    PPoint p3 = PPoint(1234.567, 93.7);
    Point p4 = Point(p3);

    TEST_ASSERT_EQUAL(-79.6695, p4.get_x_pos());
    TEST_ASSERT_EQUAL(1231.99, p4.get_y_pos());
}


int main()
{
    UNITY_BEGIN();

    RUN_TEST(cos_sin);
    RUN_TEST(ppoint);
    RUN_TEST(pp_to_p_conv);

    return UNITY_END();
}
