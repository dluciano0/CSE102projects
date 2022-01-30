#ifndef DRINKS_H_INCLUDED
#define DRINKS_H_INCLUDED

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct DrinkData
{
    string name;
    double price;
    int inventory;
};

int getChoice(DrinkData machine[],int NUM_DRINKS)
{
    int choice;

    cout << endl;

    for(int i = 0; i < NUM_DRINKS; i++)
    {
        cout << fixed << setprecision(2);
        cout << " " << (i+1) << ") " << machine[i].name << "\t\t";
        cout << machine[i].price << "\t" << "(" << machine[i].inventory << ") remaining" << endl;
    }

    cout << " " << (NUM_DRINKS + 1) << ") Leave the drink machine\n\n";

    cout << "  Choose one: ";
    cin >> choice;

    if(choice == 6)
    {
        cout << endl << "Goodbye!" << endl;
        exit(1);
    }

    while(choice < 1 || choice > 6)
    {
        cout << "\nIncorrect choice." << endl << endl << " Choose one:";
        cin >> choice;
    }

    return choice - 1;
}

void calculations(DrinkData machine[],int choice,int money)
{
    cout << "Enter an amount of money: ";
    cin >> money;

    if(money >= machine[choice].price)
    {
        cout << "\nThump, thump, thump, splat!\n" << "Enjoy your beverage!\n\n";
    }

    cout << "Change calculated: " << (money - machine[choice].price) << endl;

    if ((money - machine[choice].price) > 0)
        cout << "Your change, " << (money - machine[choice].price) << " has just dropped into the change dispenser.\n\n";

    machine[choice].inventory--;

    cout << "There are " << machine[choice].inventory << " drinks of that type left.\n";


}

#endif // DRINKS_H_INCLUDED
