#ifndef KOLO_HPP
#define KOLO_HPP
#include "Metody.hpp"
#include "Figury.hpp"
class Kolo : public Figury
{
private:
    double _promien;

public:
    Kolo(double promien);
    ~Kolo();
    double virtual pole() const override;
    double virtual obwod() const override;
    void virtual informacja() const override;
};
#endif