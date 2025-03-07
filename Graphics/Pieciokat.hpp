#ifndef PIECIOKAT_HPP
#define PIECIOKAT_HPP
#include "Metody.hpp"
#include "Figury.hpp"
class Pieciokat : public Figury
{
private:
    double _bok;

public:
    Pieciokat(double bok);
    ~Pieciokat();
    double virtual pole() const override;
    double virtual obwod() const override;
    void virtual informacja() const override;
};
#endif