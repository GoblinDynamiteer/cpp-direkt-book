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

#ifndef PPOINT_CLASS_H
#define PPOINT_CLASS_H

class PPoint
{
    public:
        PPoint(float dist_r, float angle_o);
        float get_distance(void);
        float get_angle(void);

    private:
        float d, a;
};

#endif
