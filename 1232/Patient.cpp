#include "main.h"
Patients::Patients() {
    

    if (sd.choosing("Добавить новую запись о пациенте?"))
    {

    }
    else
    {
        sd.Call_Main_menu();
    }


}