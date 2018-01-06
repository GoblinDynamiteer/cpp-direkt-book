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
#include "math_func.h"

using namespace std;

/**
 * Constructor
 * @param x_coord X coordinate
 * @param y_coord Y coordinate
 */
Point::Point(float x_coord = 0.0, float y_coord = 0.0) :
    x_pos(x_coord), y_pos(y_coord) {}

Point::Point(PPoint p)
{
    x_pos = p.get_distance() * cos_deg(p.get_angle());
    y_pos = p.get_distance() * sin_deg(p.get_angle());
}

/**
 * Calculate distace between points
 * @param  p Other point
 * @return   Distance
 */
float Point::distance(Point p)
{
    return sqrt(
        pow(x_pos - p.get_x_pos(), 2) +
        pow(y_pos - p.get_y_pos(), 2)
    );
}

float Point::get_x_pos(void)
{
    return x_pos;
}

float Point::get_y_pos(void)
{
    return y_pos;
}
