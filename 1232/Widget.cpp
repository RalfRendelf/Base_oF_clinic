#include "main.h"
#include "Widget.h"
//class Widget
//{
//    vector<string> menu{ "�������� ��������\n","Lree\n" };
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
                cout << "=>��\n" << "���\n";

            }
            else
            {
                system("cls");
                cout << Task_name << endl;
                cout << "��\n" << "=>���\n";

            }

            break;


        }
        // click = _getch();
       //  cout << click;
    }

}
void Widget::Call_Main_menu()
{
    int cnt = 0;

    while (1) {
        system("cls");
        cout << "\t\t������� ����\n";
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
            for (int i = 0; i < menu.size(); i++)
            {
                if (i == cnt)
                    cout << "=>";
                cout << menu[i] << "\n";

            }
            break;
        }
    }
}