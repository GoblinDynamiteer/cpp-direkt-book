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

#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
    PPoint a = PPoint(3.2, 11.4);
    Point b = Point(a);

    cout << "Convertion (" << a.get_distance()
         << ", " << a.get_angle() << ") >> (" << b.get_x_pos()
         << ", " << b.get_y_pos() << ")";

    return 0;
}
