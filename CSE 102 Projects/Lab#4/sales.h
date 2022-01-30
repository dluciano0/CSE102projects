#ifndef SALES_H_INCLUDED
#define SALES_H_INCLUDED
#include <iostream>
#include <iomanip>

using namespace std;

class DivSales
{
 private:
    static double corpSales;
    double divSales;

 public:
    DivSales()
    {
        divSales = 0;
    }

    double qtrs[4];

    void setDivSales(double s)
    {divSales = divSales + s;}

    void setCorpSales(double s)
    {corpSales = corpSales + s;}

    double getDivSales() const
    {return divSales;}

    double getCorpSales() const
    {return corpSales;}
};

double DivSales::corpSales;


#endif // SALES_H_INCLUDED
