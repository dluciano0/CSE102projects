#include <iostream>
#include "ships.h"

using namespace std;

int main()
{
   Ship *ships[3] = { new Ship("Lollipop", "1960"),
                new CruiseShip("Disney Magic", "1988", 2400),
                new CargoShip("Black Pearl", "1800", 50000)
                };

    for (int index = 0; index < 3; index++)
    {
        ships[index] -> print();
        cout << "----------------------------\n";
    }
    return 0;
}
