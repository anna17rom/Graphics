#ifndef METODY_HPP
#define METODY_HPP
class Metody
{
public:
    double virtual pole() const = 0;
    double virtual obwod() const = 0;
    void virtual informacja() const = 0;
};
#endif