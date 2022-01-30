#include <iostream>
#include <string>
#include <iomanip>
#include "drinks.h"

using namespace std;

int main()
{

    const int NUM_DRINKS = 5;
    int choice, money;

    DrinkData machine [NUM_DRINKS] = {
        {"Cola ", 0.75, 20},
        {"Root Beer", 0.75, 20},
        {"Lemon Lime", 0.75, 20},
        {"Grape Soda", 0.80, 20},
        {"Cream Soda", 0.80, 20},
    };

    while(choice != 6)
    {
        choice = getChoice(machine, NUM_DRINKS);

        calculations(machine, choice, money);
    }

    return 0;
}
