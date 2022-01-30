#ifndef CIRCLES_H_INCLUDED
#define CIRCLES_H_INCLUDED

#include <iostream>
#include <iomanip>

using namespace std;

class Circle
{
    private:
        double radius;
        double pi = 3.14159;

    public:
        Circle()
        {
            radius = 0;
        }

        Circle(double r)
        {
            radius = r;
        }

        void setRadius(double r)
        {
            radius = r;
        }

        double getRadius() const
        {
            return radius;
        }

        double getArea() const
        {
            return pi * radius * radius;
        }

        double getDiameter() const
        {
            return radius * 2;
        }

        double getCircumference() const
        {
            return 2 * pi * radius;
        }
};

#endif // CIRCLES_H_INCLUDED
