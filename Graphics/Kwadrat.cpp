#include "iostream"
#include "Kwadrat.hpp"
#include <math.h>
using namespace std;


 double Kwadrat::pole() const
{
    cout << "Pole kwadratu o boku " << _bok1 << " : " << endl;
    return _bok1 * _bok1;
}
 void Kwadrat::informacja() const
{
    cout << "Utworzono kwadrat" << endl;
}