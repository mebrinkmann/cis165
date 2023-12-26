/*
	Meghan Brinkmann
	Arabian Legend - For Loop - Extra Credit
	December 5, 2023
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main(void) 
{
	int day;
	double amount = 0.01;
	cout << fixed << setprecision(2);

	cout << "Day\tAmount Owed\n";
	cout << "---\t-----------\n";
	
	while (amount <= 1000000)
	{
		cout << day << "\t" << amount << "\n";
		amount = amount * 2;
		day++;
	}

  return 0;
}

