#include <iostream>
#include <iomanip>
#include "circle.h"

using namespace std;

int main()
{
    double radius = 0;
    Circle userCircle;

    while(radius =! 0)
    {
        cout << "\nEnter the circle's radius: ";
        cin >> radius;


        try
        {
        userCircle.setRadius(radius);
        cout << setprecision(2) << fixed;
        cout << "Radius: " << userCircle.getRadius() << endl;
        cout << "Area : " << userCircle.getArea() << endl;
        cout << "Diameter: " << userCircle.getDiameter() << endl;
        cout << "Circumference: " << userCircle.getCircumference() << endl;
        }

        catch (Circle::NegativeRadius e)
        {
            cout << "That is not a valid radius." << endl <<endl;
        }
    }
    return 0;
}
