#include "Wizytowka.h"
#include <iostream>
#include <string>

Wizytowka::Wizytowka()
{
    //ctor
}

Wizytowka::~Wizytowka()
{
    //dtor
}
void Wizytowka::set_imie()
{
    std::cout << "Podaj imie: ";
    std::cin >> imie;
}
void Wizytowka::set_nazwisko()
{
    std::cout << "Podaj nazwisko: ";
    std::cin >> nazwisko;
}
void Wizytowka::set_adres()
{
    std::cout << "Podaj adres: ";
    std::cin >> adres;
}
void Wizytowka::set_pesel()
{
      std::cout <<"Podaj pesel: ";
    std::cin >> pesel;
    try
    {

        if(pesel<9999999999)
        {
            throw 1;
        }
        else if(pesel>100000000000)
        {
            throw 2;
        }
    }
    catch(int x)
        {
            if(x==1)
            {while((pesel<9999999999)||(pesel>100000000000))
            {
            std::cout << "Pesel powinien skladac sie z 11 znakow " << std::endl <<"Podaj pesel: ";
            std::cin >> pesel;
            }
            }
            if(x==2)
            {while((pesel<9999999999)||(pesel>100000000000))
            {
            std::cout << "Pesel powinien skladac sie z 11 znakow " << std::endl <<"Podaj pesel: ";
            std::cin >> pesel;
            }
            }
        }
}
void Wizytowka::set_wiek()
{
    std::cout <<"Podaj wiek: ";
    std::cin >> wiek;
    try
    {
        if(wiek<0)
        {
            throw 1;
        }
    }
    catch(int x)
    {
        if(x==1)
        {while(wiek<0)
        {
            std::cout << "Wiek nie moze byc ujemny.." << std::endl << "Podaj wiek: ";
            std::cin >> wiek;
        }
        }
    }
}
void Wizytowka::get_imie()
{
    std::cout << "Imie: "<< imie << std::endl;
}
void Wizytowka::get_nazwisko()
{
    std::cout << "Nazwisko: " << nazwisko << std::endl;
}
void Wizytowka::get_adres()
{
    std::cout << "Adres: " << adres << std::endl;
}
void Wizytowka::get_pesel()
{
    std::cout << "Pesel: " << pesel << std::endl;
}
void Wizytowka::get_wiek()
{
    std::cout << "Wiek: " << wiek << std::endl;
}
