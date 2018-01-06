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
#include "math_func.h"

/**
 * Calculate cos with degrees
 * @param  a angle in degrees
 * @return   cos for angle
 */
float cos_deg(double a)
{
    return cos(DEG_TO_RAD(a));
}

/**
 * Calculate sin with degrees
 * @param  a angle in degrees
 * @return   sin for angle
 */
float sin_deg(double a)
{
    return sin(DEG_TO_RAD(a));
}
