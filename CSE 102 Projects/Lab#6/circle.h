#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
#include <iomanip>

using namespace std;

class Circle
{
    private:
        double radius;
        double pi = 3.14159;

    public:
        class NegativeRadius
        {

        };

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
            if (r >= 0)
                radius = r;
            else
                throw NegativeRadius();
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


#endif // CIRCLE_H_INCLUDED
