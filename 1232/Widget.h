#pragma once
#include "main.h"


class Widget
{
	int cnt = 0;
	
	vector<string> menu{ "Добавить пациента","Lree","rrrrrr","rect"};
	friend class Patients;
	
public:
	bool choosing(string Task_name);
	void Call_menu(string menu_name);
	void Draw_menu( string Main_str);
	void Functor();



};
