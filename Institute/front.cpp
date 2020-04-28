#include<iostream>
#include<iomanip>

using namespace std;

void frend() {
	string op1 = "Create fresh record", op2 = "Delete a Record", op3 = "Update a Record", op4 = "Append Record", op5 = "Search a Record";
	int c = 0;
	for (int m = 1; m <=5; m++)
	{
		cout << setw(59);
		for (int r = 1; r <= 25; r++)
		{
			if (m == 3 &&c<1)
			{
				c++;
				cout << "\n";
				cout << setw(80) << "RISHIKUL INSTITUTE\n";
				break;
			}
			else
				cout << "$";
		}
		cout << "\n";
	}
	cout << "Choice respective option number to perform task : \n\n";

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 16; j++)
		{
			if (i >= 3 && i <= 7)
			{
				//cout << setw(4);
				if (i == 3)
				{
					cout <<" 1) "<< op1; 
					
					cout << setw(4);
					for (int k = 0; k < 2; k++)
					{
						//cout << setw(3) << "*";
						cout<< "* ";
					}
					cout << '\n'; i++;
				}
				else if (i == 4)
				{
					cout << " 2) " << op3; 
					
					cout << setw(8);
					for (int k = 0; k < 2; k++)
					{
						//cout << setw(3) << "*";
						cout << "* ";
					}
					cout << '\n'; i++;
				}
				else if (i == 5)
				{
					cout << " 3) " << op2; 
					
					cout << setw(8);
					for (int k = 0; k < 2; k++)
					{
						//cout << setw(3) << "*";
						cout << "* ";
					}
					cout << '\n'; i++;
				}
				else if (i == 6)
				{
					cout << " 4) " << op4; 
					
					cout << setw(10);
					for (int k = 0; k < 2; k++)
					{
						//cout << setw(3) << "*";
						cout << "* ";
					}
					cout << '\n'; i++;
				}
				else if (i == 7)
				{
					cout << " 5) " << op5; 
					
					cout << setw(8);
					for (int k = 0; k < 2; k++)
					{
						//cout << setw(3) << "*";
						cout << "* ";
					}
					j = 0;
					cout << '\n'; i++;
				}
			}
				else
					cout << " *";
		}
		cout << '\n';

	}
}