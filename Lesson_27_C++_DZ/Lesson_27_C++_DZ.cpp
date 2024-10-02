#include "ForeignPassport.h"

int main()
{
	setlocale(0, "");
    Passport passport1("AA", "123456", "Іванов", "Іван", "Іванович", "01.01.1990", "Київ", "10.10.2010", "Олександр", "Київ");
    Passport passport2("BB", "654321", "Петров", "Петро", "Петрович", "02.02.1985", "Львів", "15.05.2015", "Олександр", "Львів");

    ForeignPassport foreignPassport1("CC", "112233", "Сидоров", "Сидор", "Сидорович", "03.03.1980", "Одеса", "20.07.2020", "Олександр", "Одеса");
    ForeignPassport foreignPassport2("DD", "332211", "Коваленко", "Олег", "Олегович", "04.04.1995", "Харків", "25.09.2021", "Олександр", "Харків");

    Visa visa1("Франція", "01.01.2021", "01.01.2022");
    Visa visa2("Німеччина", "15.06.2022", "15.06.2023");

    foreignPassport1.addVisa(visa1);
    foreignPassport1.addVisa(visa2);

    cout << "Інформація про звичайні паспорти:" << endl;
    passport1.showInfo();
    cout << "----------------------------" << endl;
    passport2.showInfo();
    cout << "----------------------------" << endl;

    cout << "Інформація про закордонні паспорти:" << endl;
    foreignPassport1.showInfo();
    cout << "----------------------------" << endl;
    foreignPassport2.showInfo();
    cout << "----------------------------" << endl;
}