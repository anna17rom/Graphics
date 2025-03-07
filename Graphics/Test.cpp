#include <iostream>
#include <string.h>
#include "Metody.hpp"
#include "Figury.hpp"
#include "Kolo.hpp"
#include "Szesciokat.hpp"
#include "Pieciokat.hpp"
#include "Czworokat.hpp"
#include "Kwadrat.hpp"
#include "Romb.hpp"
#include "Prostokat.hpp"
using namespace std;

int main(int argc, char *argv[])
{

    double bok1, bok2, bok3, bok4;
    double bok;
    double kat;
    double promien;

    if (strcmp(argv[1], "o") == 0)
    {
        try
        {
            promien = stoi(argv[2]);
            if (promien > 0)
            {
                Kolo *kolo = new Kolo(promien);
                kolo->informacja();
                cout << kolo->pole() << endl;
                cout << kolo->obwod() << endl;
            }
            else
            {
                cout << "promień nie może być ujemny" << endl;
            }
        }
        catch (const std::exception &e)
        {
            cout << "niepoprawny typ parametru dla koła" << endl;
        }
    }
    else if (strcmp(argv[1], "s") == 0)
    {
        try
        {
            bok = stoi(argv[2]);
            if (bok > 0)
            {
                Szesciokat *szesciokat = new Szesciokat(bok);
                szesciokat->informacja();
                cout << szesciokat->pole() << endl;
                cout << szesciokat->obwod() << endl;
            }
            else
            {
                cout << "bok nie może być ujemny" << endl;
            }
        }
        catch (const std::exception &e)
        {
            cout << "niepoprawny typ parametru dla szesciokąta" << endl;
        }
    }
    else if (strcmp(argv[1], "p") == 0)
    {
        try
        {
            bok = stoi(argv[2]);
            if (bok > 0)
            {
                Pieciokat *pieciokat = new Pieciokat(bok);
                pieciokat->informacja();
                cout << pieciokat->pole() << endl;
                cout << pieciokat->obwod() << endl;
            }
            else
            {
                cout << "bok nie może być ujemny" << endl;
            }
        }
        catch (const std::exception &e)
        {
            cout << "niepoprawny typ parametru dla pięciokąta" << endl;
        }
    }
    else if (strcmp(argv[1], "c") == 0)
    {
        try
        {
            bok1 = stoi(argv[2]);
            bok2 = stoi(argv[3]);
            bok3 = stoi(argv[4]);
            bok4 = stoi(argv[5]);
            kat = stoi(argv[6]);

            if (bok1 > 0 && bok2 > 0 && bok3 > 0 && bok4 > 0)
            {
                if (kat > 180 || kat < 0)
                {
                    cout << "niepoprawny kat dla czworokątu" << endl;
                }
                else
                {
                    if (bok1 == bok2 && bok2 == bok3 && bok3 == bok4 && kat == 90)
                    {
                        Kwadrat *kwadrat = new Kwadrat(bok1, bok2, bok3, bok4, kat);
                        kwadrat->informacja();
                        cout << kwadrat->pole() << endl;
                        cout << kwadrat->obwod() << endl;
                    }
                    else if (bok1 == bok2 && bok2 == bok3 && bok3 == bok4)
                    {
                        Romb *romb = new Romb(bok1, bok2, bok3, bok4, kat);
                        romb->informacja();
                        cout << romb->pole() << endl;
                        cout << romb->obwod() << endl;
                    }
                    else if ((bok1 == bok2 && bok3 == bok4) || (bok1 == bok4 && bok2 == bok3) || (bok1 == bok3 && bok2 == bok4) && kat == 90)
                    {
                        Prostokat *prostokat = new Prostokat(bok1, bok2, bok3, bok4, kat);
                        prostokat->informacja();
                        cout << prostokat->pole() << endl;
                        cout << prostokat->obwod() << endl;
                    }
                    else
                    {
                        cout << "Niepoprawny typ czworokatu" << endl;
                    }
                }
            }
            else
            {
                cout << "bok nie może być ujemny" << endl;
            }
        }
        catch (const std::exception &e)
        {
            cout << "niepoprawny typ parametrów dla czworokątu" << endl;
        }
    }

    else
    {
        cout << argv[1] << " - nieprawidłowy typ figury" << endl;
    }

    return 0;
}