#include <iostream>
#include"Ins.h"
using namespace std;
int main()
{
	Ins f1, eg; int op, ab; 
	int z = 0;
	char ans = 'y';									//f1-> object for only input in file. eg-> any random object for random task 
										
	cin >> op;
	while (ans=='Y'|| ans=='y')
	{
		
		if (z!= 0)
		{
			cout << "Enter again : ";
			cin >> op;
		}
		
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
			cout << "Displaying all data : \n";
			eg.disp_all();
			break;
		case 3:
			cout << "Enter Admission number to be searched : ";
			cin >> ab;
			search(ab);
		case 4:
			cout << "Enter data :\n";
			append_data();
			cout << "Added successfully\n";
		}
		cout << "\n Want to continue , press Y for yes : ";
		cin >> ans;
		z++;
	}
	
}
