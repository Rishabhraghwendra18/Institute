#include "Ins.h"
#include<string>
#include<iostream>

Ins::Ins() {
	admin = 0, fees = 0;
	gender = 'M';
}
void Ins::in_file(Ins temp) {
	ofstream fout;
	fout.open("Institute_data", ios::out || ios::binary);
	fout.write((char*)& temp, sizeof(temp));
	cout << "Inputed data successfully\n";
	fout.close();
}
void Ins::input() {
	cout << "Enter name : ";
	getline(cin, name);
	cout << "Enter admission number : ";
	cin >> admin;
	cout << "Enter student gender(Press 'M' for male and 'F' for female) : ";
	cin >> gender;
	if (gender == 'M' || gender == 'm')
	{
		cout << "Enter his joining date : ";
		getline(cin, join_date);
		cout << "Enter his batch : ";
		getline(cin, batch);
		cout << "Enter his fees : ";
		cin >> fees;
		cout << "Enter his class : ";
		getline(cin, Class);
	}
	else
	{
		cout << "Enter her joining date : ";
		getline(cin, join_date);
		cout << "Enter her batch : ";
		getline(cin, batch);
		cout << "Enter her fees : ";
		cin >> fees;
		cout << "Enter her class : ";
		getline(cin, Class);
	}

}
void Ins::diplay() {
	cout << "Name of student : " << name;
	cout << "\nAdmission Number : " << admin;
	cout << "\nEnter his class : " << Class;
	cout << "\nGender : " << gender;
	cout << "\nJoining date : " << join_date;
	cout << "\nBatch : " << batch;
}
void Ins::disp_all() {
	ifstream ifs("Institute_data", ios::in || ios::binary);
	Ins at;
	while (ifs.read((char*)& at, sizeof(at)))
	{
		at.diplay();
	}
}
int Ins::ad() {
	return admin;
}
void create()
{
	ofstream ofs("Institute_data", ios::binary);
	cout << "\nFile created successfully\n";
	ofs.close();
}
void search(int adm_n)
{
	int n = 0;
	ifstream s; Ins s1;
	s.open("Institute_data", ios::in | ios::binary);
	while (s.read((char*)& s1, sizeof(s1)))
	{
		if (s1.ad() == adm_n)
		{
			s1.diplay();
			n = 0;
			break;

		}
		else
			n++;
	}
	if (n != 0) {
		cout << "Not found";
	}
}




