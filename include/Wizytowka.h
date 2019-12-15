#ifndef WIZYTOWKA_H
#define WIZYTOWKA_H
#include <iostream>


class Wizytowka
{
    public:
        Wizytowka();
        virtual ~Wizytowka();

        //void prezentacja();
        //void get_imie();
        //void get_nazwisko();
        //void get_adres();
        //void get_nr();
        void get_wiek();
        int porownanie();

    protected:

    private:
        //std::string imie,nazwisko,adres,nr;
        int wiek1,wiek2;

};

#endif // WIZYTOWKA_H
