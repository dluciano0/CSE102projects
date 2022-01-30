#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
#include "product.h"

using namespace std;

int main()
{
    vector<Product> products;
    string name, userChoice, changeType;
    double changeData;
    int units;
    double price;

    ifstream inFile;
    inFile.open("productInfo.txt");

    inFile >> name >> price >> units;

    while(inFile)
    {
        Product p(name, price, units);
        products.push_back(p);
        inFile >> name >> price >> units;
    }

    cout << "\tThe list of products is:" << endl << endl;

    cout << setw(10) << "Name";
    cout << setw(10) << "Price";
    cout << setw(10) << "Units";
    cout << setw(15) << "Reorder Pt" << endl;

    for (auto element : products)
    {
        cout << fixed << setprecision(2);
        cout << setw(10) << element.getName();
        cout << setw(10) << element.getPrice();
        cout << setw(10) << element.getUnits();
        cout << setw(10) << element.getReorderPoint() << endl;
    }

    cout << endl << "\tName of product to change: ";
    cin >> userChoice;

    for(int i = 0; i < 6; i++)
    {
        if(products[i].getName() == userChoice)
        {
            cout << "Enter p, u, or r to change price, units, or reorder point: ";
            cin >> changeType;
            cout << "What would you like to change it to? ";
            cin >> changeData;

            if(changeType == "p")
                products[i].setPrice(changeData);

            else if(changeType == "u")
                products[i].setUnits((int)changeData);

            else if(changeType == "r")
                products[i].setReorderPoint((int)changeData);
        }
    }

    cout << "\tThe list of products is:" << endl << endl;

    cout << setw(10) << "Name";
    cout << setw(10) << "Price";
    cout << setw(10) << "Units";
    cout << setw(15) << "Reorder Pt" << endl;

    for (auto element : products)
    {
        cout << fixed << setprecision(2);
        cout << setw(10) << element.getName();
        cout << setw(10) << element.getPrice();
        cout << setw(10) << element.getUnits();
        cout << setw(10) << element.getReorderPoint() << endl;
    }

    return 0;
}
