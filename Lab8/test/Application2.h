#pragma once
#include <iostream>
#include <string>
#include "Blank.h"


using namespace Blan;
using namespace std;

namespace App
{
    class ApplicationData :public Blank
    {
    private:
        time_t now = time(0);
        string dt = ctime(&now);
        string number = "380970617189";
        bool uaCountry;
        string country;
        string city;
        bool dmgTheCar = false;
    public:


        ApplicationData(int, string, string, string);
        ApplicationData();

        void show_data();
        void set_number();
        void set_country_city();
        bool get_ua_number();
        static void print_info();
        bool damage_Car(bool get,bool t);

        //перевантажені
        void get_number_country();
        static void get_number_country(string num);
        void pring_additional_info();
        void pring_additional_info(bool moreInfo);
        
    };
}

