#ifndef WIZYTOWKA_H
#define WIZYTOWKA_H
#include <iostream>


class Wizytowka
{
    public:
        Wizytowka();
        virtual ~Wizytowka();

        void get_imie();
        void get_nazwisko();
        void get_adres();
        void get_pesel();
        void get_wiek();

        void set_imie();
        void set_nazwisko();
        void set_adres();
        void set_pesel();
        void set_wiek();

    protected:

    private:
        std::string imie,nazwisko,adres;
        int wiek;
        long long pesel;

};

#endif // WIZYTOWKA_H
