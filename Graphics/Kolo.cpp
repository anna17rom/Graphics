#include "iostream"
#include "Kolo.hpp"
#include <math.h>
using namespace std;

Kolo::Kolo(double promien) : _promien(promien)
{
}
double Kolo::pole() const
{
    cout << "Pole koła o promieniu " << _promien << " : " << endl;
    return _promien * _promien * M_PI;
}
double Kolo::obwod() const
{
    cout << "Obwód koła o promieniu " << _promien << " : " << endl;
    return _promien * 2 * M_PI;
}
void Kolo::informacja() const
{
    cout << "Utworzono koło" << endl;
}
Kolo::~Kolo() {}
