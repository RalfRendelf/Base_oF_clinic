// 1232.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <fstream>
#include <conio.h>
using namespace std;
//class Widget
//{public:
//    bool choosing(string Task_name);
//    void Call_Main_menu();
//
//};
class Patients {
private:
    int age;
    string name, diagnos, city, gender;
  friend class Widget;
    fstream file;
public:
    Patients() {
        
        
       if( choosing("Добавить новую запись о пациенте?"))
       {
       
       }
       else
       {
           menu.Call_Main_menu();
       }


    }


};
class Widget
{
    vector<string> menu{"Добавить пациента\n","Lree\n"};
public:
    bool choosing(string Task_name)
    {
        bool check = false;
        
        int click = 0;
        while (1)
        {
          
           // cout << click;
            switch (_getch())
            { case 13:
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
    void Call_Main_menu()
    {
        int cnt = 0;
        
        while (1) {
            system("cls");
            cout << "\t\tГлавное меню\n";
            switch (_getch())
            {case 72:
                cnt--;
                if (cnt < 0)
                    cnt = menu.size()-1;
                break;
            case 80:
                cnt++;
                if (cnt > menu.size()-1)
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
};

int main()
{
    string name = "diagnos.txt";

    Widget f;
    setlocale(LC_ALL, "Russian");
    f.Call_Main_menu();
   
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
