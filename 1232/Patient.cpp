#include "main.h"
#include "Widget.h"
#include "Patient.h"
//class Patients {
//private:
//    int age;
//    string name, diagnos, city, gender;
//    Widget sd;
//    fstream file;
//public:
//    Patients();
//
//
//};
Patients::Patients() {
    

    if (sd.choosing("Добавить новую запись о пациенте?"))
    {

    }
    else
    {
        sd.Call_Main_menu();
    }


}