#include "Application2.h"
using namespace App;
#pragma execution_character_set( "utf-8" )
ApplicationData::ApplicationData(int t, string f, string sN, string dOB) :Blank(t, f, sN, dOB)
{
    timeRent = t;
    firstName = f;
    scondName = sN;
    dateOfBirth = dOB;
    //cout << t << endl;
}

ApplicationData::ApplicationData() :Blank()
{
    //cout << "empty" << endl; 
}

//ApplicationData(const ApplicationData &a) :timeRent(200), firstName("f"), scondName("sN"), dateOfBirth("dOB") {}
void ApplicationData::show_data()
{
    cout << dt;
}
void ApplicationData::set_number()
{
    cout << endl << "Введiть номер телефону:";
    cin >> number;
}
void ApplicationData::set_country_city()
{
    cout << "\nВведіть країну:";
    cin >> country;
    cout << "\nВведіть місто:";
    cin >> city;
}
bool ApplicationData::get_ua_number()
{
    return uaCountry;
}

//перевантажені
void ApplicationData::get_number_country()
{
    string country = number.substr(0, 3);
    if (country == "380") uaCountry = true;
    else uaCountry = false;
}
void ApplicationData::get_number_country(string num)
{
    string country = num.substr(0, 3);
    cout << "\nНомер телефону український: ";
    if (country == "380") cout << "Так";
    else cout << "Ні";
}
void ApplicationData::pring_additional_info()
{
    string yesNo;
    if (uaCountry) yesNo = "yes";
    else yesNo = "no";
    cout << "\nНомер телефону: " << number;
    cout << "\nУкраїнський номер: " << yesNo;
}
void ApplicationData::pring_additional_info(bool moreInfo)
{
    string yesNo;
    if (uaCountry) yesNo = "yes";
    else yesNo = "no";
    cout << "\nНомер телефону: " << number;
    cout << "\nУкраїнський номер: " << yesNo;
    cout << "\nКраїна" << country;
    cout << "\nМісто" << city;
}
void ApplicationData::print_info()
{
    cout << "\nЗаявка має наступні основні поля: час оренди, і'мя, прізвище, дата народження. Також присутні необовязкові поля.";
}
bool ApplicationData::damage_Car(bool get,bool t)
{
    if (get != true) {
        if (t)
            dmgTheCar = true;
        else
            dmgTheCar = false;
    }
    else
        return dmgTheCar;
}