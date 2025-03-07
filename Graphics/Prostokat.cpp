#include "iostream"
#include "Prostokat.hpp"
#include <math.h>
using namespace std;

 double Prostokat::pole() const
{
    if (_bok1 == _bok2)
    {
        cout << "Pole prostokata o bokach " << _bok1 << " i " << _bok3 << " : " << endl;
        return _bok1 * _bok3;
    }
    else
    {
        cout << "Pole prostokata o bokach " << _bok1 << " i " << _bok2 << " : " << endl;
        return _bok1 * _bok2;
    }
}
 void Prostokat::informacja() const
{
    cout << "Utworzono prostokat" << endl;
}

