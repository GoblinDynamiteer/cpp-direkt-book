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

#ifndef POINT_CLASS_H
#define POINT_CLASS_H

#include "PPoint.h"

class Point
{
    public:
        Point(float x_coord, float y_coord);
        Point(PPoint p);
        float distance(Point p);
        float get_x_pos(void);
        float get_y_pos(void);

    private:
        float x_pos, y_pos;
};

#endif
