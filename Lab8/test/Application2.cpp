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
    cout << endl << "����i�� ����� ��������:";
    cin >> number;
}
void ApplicationData::set_country_city()
{
    cout << "\n������ �����:";
    cin >> country;
    cout << "\n������ ����:";
    cin >> city;
}
bool ApplicationData::get_ua_number()
{
    return uaCountry;
}

//������������
void ApplicationData::get_number_country()
{
    string country = number.substr(0, 3);
    if (country == "380") uaCountry = true;
    else uaCountry = false;
}
void ApplicationData::get_number_country(string num)
{
    string country = num.substr(0, 3);
    cout << "\n����� �������� ����������: ";
    if (country == "380") cout << "���";
    else cout << "ͳ";
}
void ApplicationData::pring_additional_info()
{
    string yesNo;
    if (uaCountry) yesNo = "yes";
    else yesNo = "no";
    cout << "\n����� ��������: " << number;
    cout << "\n���������� �����: " << yesNo;
}
void ApplicationData::pring_additional_info(bool moreInfo)
{
    string yesNo;
    if (uaCountry) yesNo = "yes";
    else yesNo = "no";
    cout << "\n����� ��������: " << number;
    cout << "\n���������� �����: " << yesNo;
    cout << "\n�����" << country;
    cout << "\n̳���" << city;
}
void ApplicationData::print_info()
{
    cout << "\n������ �� ������� ������ ����: ��� ������, �'��, �������, ���� ����������. ����� ������� ����������� ����.";
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