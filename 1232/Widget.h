#pragma once
#include "main.h"


class Widget
{
	vector<string> menu{ "Добавить пациента","Lree","rrrrrr","rect"};
public:
	bool choosing(std::string Task_name);
	void Call_menu(string menu_name);
	void Draw_menu(vector<string> &Menu, string Main_str, int &cnt);



};
