#include "iostream"
#include "Czworokat.hpp"
#include <math.h>
using namespace std;

Czworokat::Czworokat(double bok1, double bok2, double bok3, double bok4, double kat)
    : _bok1(bok1), _bok2(bok2), _bok3(bok3), _bok4(bok4), _kat(kat)
{
}

double Czworokat::obwod() const
{
    if (_bok1 == _bok2 && _bok2 == _bok3 && _bok3 == _bok4 && _kat == 90)
    {
        cout << "Obwód kwadratu o boku " << _bok1 << " : " << endl;
    }
    else if (_bok1 == _bok2 && _bok2 == _bok3 && _bok3 == _bok4)
    {
        cout << "Obwód  rombu o boku " << _bok1 << " i o kacie " << _kat << " : " << endl;
    }
    else if ((_bok1 == _bok2 && _bok3 == _bok4) || (_bok1 == _bok4 && _bok2 == _bok3) || (_bok1 == _bok3 && _bok2 == _bok4) && _kat == 90)
    {
        if (_bok1 == _bok2)
        {
            cout << "Obwód prostokąta o bokach " << _bok1 << " i " << _bok3 << " : " << endl;
        }
        else
        {
            cout << "Obwód prostokąta o bokach " << _bok1 << " i " << _bok2 <<" : " << endl;
        }
    }

    return _bok1 + _bok2 + _bok3 + _bok4;
}