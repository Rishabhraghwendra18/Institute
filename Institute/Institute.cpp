#include <iostream>
#include"Ins.h"
using namespace std;
int main()
{
	Ins f1,eg; int op,ab;				
										/**f1-> object for only input in file 
										eg-> any random object for random task **/
	cin >> op;
	switch (op)
	{
	case 1:
		create();
		cout << "Enter data for input :\n";
		f1.input();
		f1.in_file(f1);
		cout << "Successfully Written in file \n";
		break;
	case 2:
		cout << "Displaying all data : ";
		eg.disp_all();
		break;
	case 3:
		cout << "Enter Admission number to be searched : ";
		cin >> ab;
		search(ab);
	}
}
