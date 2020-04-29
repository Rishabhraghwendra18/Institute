#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Ins
{
	int admin,fees;
	string name,join_date,batch;
	char gender;
public:
	Ins() {
		admin = 0, fees = 0;
		gender = 'M';
	}
	void in_file(Ins temp) {
		ofstream fout;
		fout.open("Institute_data", ios::out || ios::binary);
		fout.write((char*)& temp, sizeof(temp));
		cout << "Inputted data successfully\n";
	}
	void input() {
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
		}
		else
		{
			cout << "Enter her joining date : ";
			getline(cin, join_date);
			cout << "Enter her batch : ";
			getline(cin, batch);
			cout << "Enter her fees : ";
			cin >> fees;
		}

	}
	
};
void create()
{
	ofstream ofs("Institute_data", ios::binary);
	cout << "\nFile created successfully\n";
	ofs.close();
}

