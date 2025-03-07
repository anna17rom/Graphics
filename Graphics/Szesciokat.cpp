#include "iostream"
#include "Szesciokat.hpp"
#include <math.h>
using namespace std;

Szesciokat::Szesciokat(double bok) : _bok(bok)
{
}
double Szesciokat::pole() const
{
    cout << "Pole szesciokąta o boku " << _bok << " : " << endl;
    return 3 * (_bok * _bok * sqrt(3)) / 2;
}
double Szesciokat::obwod() const
{
    cout << "Obwód szesciokąta o boku " << _bok << " : " << endl;
    return _bok * 6;
}
void Szesciokat::informacja() const
{
    cout << "Utworzono szesciokąt" << endl;
}
Szesciokat::~Szesciokat() {}