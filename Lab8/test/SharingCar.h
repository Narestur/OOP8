#pragma once
#include "Car.h"
#include "Application2.h"
#include "Car_info.h"
#include "Car_parameters.h"
#include <string>
#include "overint.h"
#include <vector>
using namespace std;
using namespace CarInfo;
using namespace CarParameters;
using namespace carR;
using namespace App;
using namespace overwrite;

namespace Sharing
{
    class SharingCar
    {
        
        private:
            struct cars
            {
                int year = 0;
                int price = 0;
                int CarRun = 0;
                string model = "0";
                string color = "0";
                Car *carType;
            };
            
        public:
            vector <cars> CarList; //= new cars[10];
            int CarNum = 0;
            vector <ApplicationData> appList;
            int appNum = 0;
            SharingCar();
            //Методи
            void add_Car(cars CarObj);
            void add_Car(int year, int price, int CarRun, string model, string color);
            void add_app(ApplicationData appObj/*, bool newApp*/);

            void service(cars car[10], ApplicationData app[10]);
            void write(cars carWrite[10], ApplicationData appWrite[10]);
            void read();
            //void randomMemory();
            //Перевантаження методи
            //void Car_show();
            //void Car_show(int index);

            void app_show();
            void app_show(int index);
            void check_if_ua_number(string number);

            void Service_Static();
            void Service_Dinamic();
        
            void overwork(int num, int carnum, char oper);
    };
}
