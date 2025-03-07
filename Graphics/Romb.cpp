#include "iostream"
#include "Romb.hpp"
#include <math.h>
using namespace std;

 double Romb::pole() const
{
    cout << "Pole rombu o boku " << _bok1 << " i o kacie " << _kat << " : " << endl;
    return _bok1 * _bok1 * sin((M_PI * _kat) / 180);
}
void Romb::informacja() const
{
    cout << "Utworzono romb" << endl;
}
