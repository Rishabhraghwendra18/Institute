#include<iostream>
#include<iomanip>
using namespace std;

void frend() {
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

	/**for (int i = 1; i < 11; i++)
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

	}**/
}