#include <iostream>

using namespace std;

template <class T>
T total(T number)
{
    T value = 0;
    T total = 0;

    for (int i = 0; i < number; i++)
        {
            cout << "Enter the values:" << endl;
            cin >> value;
            total += value;
        }

    return total;

}
int main()
{
    int intVals, intTotal;
    double doubleVals, doubleTotal;

    cout << "\nHow many integer values do you wish to total? ";
    cin >> intVals;
    intTotal = total(intVals);
    cout << "The total is " << intTotal << endl;

    cout << "\nHow many double values do you wish to total? ";
    cin >> doubleVals;
    doubleTotal = total(doubleVals);
    cout << "The total is " << doubleTotal << endl;

    return 0;
}
