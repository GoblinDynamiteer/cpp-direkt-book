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

#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
    Point a = Point(3.2, 11.4);
    Point b = Point(-33, 135.21);

    cout << "Distace between (" << a.get_x_pos()
         << ", " << a.get_y_pos() << ") and (" << b.get_x_pos()
         << ", " << b.get_y_pos() << ") is " << a.distance(b);

    return 0;
}
