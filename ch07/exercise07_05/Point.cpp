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

#include <math.h>
#include "Point.h"

using namespace std;

/**
 * Constructor
 * @param x_coord X coordinate
 * @param y_coord Y coordinate
 */
Point::Point(float x_coord = 0.0, float y_coord = 0.0) :
    x_pos(x_coord), y_pos(y_coord) {}

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
