#include "iostream"
#include "Pieciokat.hpp"
#include <math.h>
using namespace std;

Pieciokat::Pieciokat(double bok) : _bok(bok)
{
}
double Pieciokat::pole() const
{
    cout << "Pole pieciokąta o boku " << _bok << " : " << endl;
    return 5 * (_bok * _bok * (1 / tan(M_PI / 5))) / 4;
}
double Pieciokat::obwod() const
{
    cout << "Obwód pięsciokąta o boku " << _bok << " : " << endl;
    return _bok * 5;
}
void Pieciokat::informacja() const
{
    cout << "Utworzono pięsciokąt" << endl;
}
Pieciokat::~Pieciokat() {}