#include <iostream>
#include <iomanip>
#include <fstream>
#include "sales.h"

using namespace std;

int main()
{
    DivSales divisions[6];
    int userDiv = 7;

    ifstream in_stream;
    in_stream.open("SalesFile.txt");

    while(!in_stream.eof())
    {
        for(int div = 0; div < 6; div++)
            for (int qtr = 0; qtr < 4; qtr++)
            {
                in_stream >> divisions[div].qtrs[qtr];
                divisions[div].setCorpSales(divisions[div].qtrs[qtr]);
                divisions[div].setDivSales(divisions[div].qtrs[qtr]);
            }
    }

    cout << fixed << setprecision(2);

    cout << "\nEnter a division (1-6), or 0 to quit: ";
    cin >> userDiv;

    while(userDiv != 0)
    {
        for (int qtr = 0; qtr < 4; qtr++)
        {
            cout << "\tDivision #" << userDiv << "\tQuarter " << qtr + 1 << " sales: $";
            cout << divisions[userDiv-1].qtrs[qtr] << endl;
        }

        cout << "\n\tDivision #" << userDiv << " total Sales are: $" << divisions[userDiv-1].getDivSales() << endl;

        cout << "\nEnter a division (1-6), or 0 to quit: ";
        cin >> userDiv;
    }

    cout << "\nTotal corporate sales: $" << divisions[0].getCorpSales();

    in_stream.close();

    return 0;
}
