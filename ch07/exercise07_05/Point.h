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

#ifndef POINT_CLASS_H
#define POINT_CLASS_H

class Point
{
    public:
        Point(float x_coord, float y_coord);
        float distance(Point p);
        float get_x_pos(void);
        float get_y_pos(void);

    private:
        float x_pos, y_pos;
};

#endif
