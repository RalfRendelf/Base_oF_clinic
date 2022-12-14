#include "main.h"
#include "Widget.h"
//class Widget
//{
//    vector<string> menu{ "Добавить пациента\n","Lree\n" };
//public:
//    bool choosing(string Task_name);
//    void Call_Main_menu();
//};
bool Widget::choosing(string Task_name)
{
    bool check = false;

    int click = 0;
    while (1)
    {

        // cout << click;
        switch (_getch())
        {
        case 13:
            return check;
        case 72:
            check = !check;
            //system("clr");
            break;
        case 80:
            check = !check;
            // system("clr");
            break;
        default:
            if (check)
            {
                system("cls");
                cout << Task_name << endl;
                cout << "=>Да\n" << "Нет\n";

            }
            else
            {
                system("cls");
                cout << Task_name << endl;
                cout << "Да\n" << "=>Нет\n";

            }

            break;


        }
        // click = _getch();
       //  cout << click;
    }

}
void Widget::Call_menu(string menu_name)
{ 
    int cnt = 0;
    Draw_menu(menu, menu_name, cnt);
    while (1) {
        
        
        switch (_getch())
        {
        case 72:
            cnt--;
            if (cnt < 0)
                cnt = menu.size() - 1;
            break;
        case 80:
            cnt++;
            if (cnt > menu.size() - 1)
                cnt = 0;
            break;

        default:
            Draw_menu(menu, menu_name, cnt);
            break;
        }
    }
}
void Widget::Draw_menu(vector<string>& Menu, string Main_str, int &cnt)
{
    system("cls");
    cout << "\t\t"<<Main_str<<"\n";
    for (int i = 0; i < Menu.size(); i++)
    {
        if (i == cnt)
            cout << "=>";
        cout << Menu[i] << "\n";

    }

}