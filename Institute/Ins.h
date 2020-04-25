#include<iostream>
#include<string>
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
	void test() {
		cout << "Working";
	}
	
};

