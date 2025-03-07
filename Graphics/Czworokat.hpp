#ifndef CZWOROKAT_HPP
#define CZWOROKAT_HPP
#include "Metody.hpp"
#include "Figury.hpp"
class Czworokat : public Figury
{
protected:
    double _bok1;
    double _bok2;
    double _bok3;
    double _bok4;
    double _kat;

public:
    Czworokat(double bok1, double bok2, double bok3, double bok4, double kat);
    double virtual obwod() const override;
};
#endif