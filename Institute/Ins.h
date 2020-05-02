#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Ins
{
	int admin,fees;
	string name,join_date,batch,Class;
	char gender;
public:
	Ins();
	void in_file(Ins temp);
	void input();
	void diplay();
	void disp_all();
	int ad();
	
};
void create();
void search(int adm_n);
