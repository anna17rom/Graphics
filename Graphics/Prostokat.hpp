#ifndef PROSTOKAT_HPP
#define PROSTOKAT_HPP
#include "Metody.hpp"
#include "Czworokat.hpp"

class Prostokat : public Czworokat
{
public:
    Prostokat(double bok1, double bok2, double bok3, double bok4, double kat) : Czworokat(bok1, bok2, bok3, bok4, kat) {}
    double virtual pole() const override;
    void virtual informacja() const override;
};
#endif