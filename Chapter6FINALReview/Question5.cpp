/*
	Meghan Brinkmann
	CIS-165
	Review for final
	Question 5 - write a program
*/

#include <iostream>
using namespace std;

int main(void)
{
	int num1, num2, code, sum;
	
	cout << "Enter 2 numbers seperated by a space: ";
	cin >> num1 >> num2;
	cout << "Enter the selector code (1 or 2 or 3): ";
	cin >> code;
	
	if(code == 1)
	{
		sum = num1 + num2;
		cout << "The total is " << sum << endl;
	}
	else if(code == 2)
	{
		sum = num1 - num2;
		cout << "The total is " << sum << endl;
	}
	else if(code == 3)
	{
		sum = num1 * num2;
		cout << "The total is " << sum << endl;
	}
	else
	{
		cout << "Invalid Selector Code";
	}
	
	return 0;
}
