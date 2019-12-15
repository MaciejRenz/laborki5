#include <iostream>
#include "Wizytowka.h"

using namespace std;

int main()
{
    Wizytowka wizytowka;
    wizytowka.get_imie();
    wizytowka.get_nazwisko();
    wizytowka.get_adres();
    wizytowka.get_nr();
    wizytowka.prezentacja();
    return 0;
}
