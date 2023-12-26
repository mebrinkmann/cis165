/*
	Meghan Brinkmann
	Arabian Legend - While Loop
	December 5, 2023
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(void) 
{
	double amount = 0.01;
	int day = 1;
	cout << fixed << setprecision(2);

	cout << "Day\tAmount Owed\n";
	cout << "---\t-----------\n";

	while (day <= 64)
	{
		cout << day << "\t" << amount << "\n";
    	amount = amount * 2;
    	day++;
	}

  return 0;
}

