#ifndef SZESCIOKAT_HPP
#define SZESCIOKAT_HPP
#include "Metody.hpp"
#include "Figury.hpp"
class Szesciokat : public Figury
{
private:
    double _bok;

public:
    Szesciokat(double bok);
    ~Szesciokat();
    double virtual pole() const override;
    double virtual obwod() const override;
    void virtual informacja() const override;
};
#endif