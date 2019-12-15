#ifndef WIZYTOWKA_H
#define WIZYTOWKA_H
#include <iostream>


class Wizytowka
{
    public:
        Wizytowka();
        virtual ~Wizytowka();

        void prezentacja();
        void get_imie();
        void get_nazwisko();
        void get_adres();
        void get_nr();

    protected:

    private:
        std::string imie,nazwisko,adres,nr;

};

#endif // WIZYTOWKA_H
