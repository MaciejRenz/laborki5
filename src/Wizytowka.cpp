#include "Wizytowka.h"
#include <iostream>

Wizytowka::Wizytowka()
{
    //ctor
}

Wizytowka::~Wizytowka()
{
    //dtor
}
void Wizytowka::prezentacja()
{
    std::cout << std::endl;
    std::cout << " Imie: " << imie <<std::endl;
    std::cout << " Nazwisko: " << nazwisko <<std::endl;
    std::cout << " Adres: " << adres <<std::endl;
    std::cout << " Nr " << nr <<std::endl;
}
void Wizytowka::get_imie()
{
    std::cout << "Podaj imie: ";
    std::cin >> imie;
}
void Wizytowka::get_nazwisko()
{
    std::cout << "Podaj nazwisko: ";
    std::cin >> nazwisko;
}


void Wizytowka::get_adres()
{
    std::cout << "Podaj adres: ";
    std::cin >> adres;
}


void Wizytowka::get_nr()
{
    std::cout << "Podaj nr: ";
    std::cin >> nr;
}


