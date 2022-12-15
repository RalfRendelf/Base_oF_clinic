#include "main.h"
#include "Widget.h"


void Widget::Draw_menu(string& name, vector<string>& Points)/*метод для отрисовки меню*/
{
    system("cls");
    cout << "\t\t" << name << "\n";
    MenuSize = Points.size();
    for (int i = 0; i < MenuSize; i++)
    {
        if (i == cnt)
            cout << "=>";
        cout << Points[i] << "\n";

    }
}


void Widget::click()/*метод для выбора варианта в меню с помощью клавишей верх, вниз и ввод*/
{
     switch (_getch())
            {
            case 13://ввод
                Enter = true;
                break;
            case 72://стрелка вниз
                cnt--;
                if (cnt < 0) cnt = MenuSize - 1;
                break;
            case 80://стрелка вверх
                cnt++;
                if (cnt > MenuSize - 1) cnt = 0;
                break;

            default: break;
            }
  }
void Widget::Main_menu()/*вызов главного меню*/
{
    vector<string> mainmenu{ "Добавить пациента","Отобразить пациентов" };
    string menuname = "Главное меню";
    Enter = 0;
    cnt = 0;
    int cntfu;
    while (1)
    {
        
        Draw_menu(menuname, mainmenu);
        click();
        cntfu = cnt;
        if (Enter)
        {
            choose();
        }

        cnt = cntfu;
    }
}
void Widget::choose()
{
    switch (cnt)
    {
    case 0:


    default:
        break;
    }
}