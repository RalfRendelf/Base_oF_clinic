#pragma once
#include "main.h"


class Widget
{
	int cnt = 0;
	bool Enter = false;
	int MenuSize = 0;
	bool power = false;
	
	//vector<string> menu{ "�������� ��������","Lree","rrrrrr","rect"};
	//friend class Patients;
	//vector<string> Questctoin{ "��","���" };
	
public:
	
	void Draw_menu( string &str,vector<string> &Points);
	void click();
	void Main_menu();
	void choose();


};
