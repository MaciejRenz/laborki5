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
//void Wizytowka::prezentacja()
//{
 //   std::cout << std::endl;
//    std::cout << " Imie: " << imie <<std::endl;
 //   std::cout << " Nazwisko: " << nazwisko <<std::endl;
 //   std::cout << " Adres: " << adres <<std::endl;
 //   std::cout << " Nr " << nr <<std::endl;
//}
//void Wizytowka::get_imie()
//{
//    std::cout << "Podaj imie: ";
 //   std::cin >> imie;
//}
//void Wizytowka::get_nazwisko()
//{
  //  std::cout << "Podaj nazwisko: ";
    //std::cin >> nazwisko;
//}
//
//
//void Wizytowka::get_adres()
//{
  //  std::cout << "Podaj adres: ";
    //std::cin >> adres;
//}
//
//
//void Wizytowka::get_nr()
//{
  //  std::cout << "Podaj nr: ";
    //std::cin >> nr;
//}
void Wizytowka::get_wiek()
{
    std::cout <<"Podaj wiek pierwszej osoby: ";
    std::cin >> wiek1;
    std::cout <<"Podaj wiek drugiej osoby: ";
    std::cin >> wiek2;
}
int Wizytowka::porownanie()
{
    try
    {
        wiek1;
        wiek2;
        if(wiek1>wiek2)
        {
            throw 1;
        }
        else if(wiek1==wiek2)
        {
            throw 2;
        }
        else
        {
            throw 3;
        }
    }
    catch(int x)
    {
        if(x==1)
        {
            std::cout << "Druga osoba jest mlodsza";
        }
        else if(x==2)
        {
            std::cout << "Nie ma osoby mlodszej";
        }
        if(x==3)
        {
            std::cout << "Pierwsza osoba jest mlodsza";
        }
    }
}

