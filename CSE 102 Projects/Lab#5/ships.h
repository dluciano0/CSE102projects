#ifndef SHIPS_H_INCLUDED
#define SHIPS_H_INCLUDED

using namespace std;

class Ship
{
    private:
        string name;
        string yearBuilt;

    public:
        Ship(string n, string y)
        {
            name = n;
            yearBuilt = y;
        }

        string getName()
        {
            return name;
        }

        string getYearBuilt()
        {
            return yearBuilt;
        }

        virtual void print()
        {
            cout << "Name: " << name << endl << "Year built: " << yearBuilt << endl;
        }
};

class CruiseShip : public Ship
{
    private:
        string name;
        int maxPassengers;

    public:
        CruiseShip(string n, string y, int m) : Ship(n,y)
        {
            name = n;
            maxPassengers = m;
        }

        string getName()
        {
            return name;
        }

        int getPassengers()
        {
            return maxPassengers;
        }

        virtual void print()
        {
            cout << "Name: " << name << endl << "Maximum Passengers: " << maxPassengers << endl;
        }
};

class CargoShip : public Ship
{
    private:
        string name;
        int cargoCapacity;

    public:
        CargoShip(string n, string y, int c) : Ship(n,y)
        {
            name = n;
            cargoCapacity = c;
        }

        string getName()
        {
            return name;
        }

        int getCapacity()
        {
            return cargoCapacity;
        }

        virtual void print()
        {
            cout << "Name: " << name << endl << "Cargo capacity: " << cargoCapacity << endl;
        }
};




#endif // SHIPS_H_INCLUDED
