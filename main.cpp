#include <iostream>
#include "Wizytowka.h"

using namespace std;

int main()
{
Wizytowka osoba;
osoba.set_imie();
osoba.set_wiek();
osoba.set_pesel();
osoba.get_imie();
osoba.get_pesel();
osoba.get_wiek();

    return 0;
}
