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

#include "PPoint.h"


PPoint::PPoint(
    float dist_r = 0, float angle_o = 0) : d(dist_r), a(angle_o) {};

float PPoint::get_distance(void)
{
    return d;
}

float PPoint::get_angle(void)
{
    return a;
}
