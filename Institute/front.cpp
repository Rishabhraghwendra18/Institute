#include<iostream>
#include<iomanip>
using namespace std;

void frend() {
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			if (i >= 3 && i <= 6)
			{
				cout << setw(4)<< "Hi";
				for (int k = 0; k < 2; k++)
				{
					cout << setw(4) << " *";
				}
				cout << '\n'; i++;
			}
			else
				cout << " *";
		}
		cout << '\n';

	}
}