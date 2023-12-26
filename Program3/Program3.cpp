/*

Meghan Brinkmann
CIS-165
Project 3
Completion Date: 11/12/23
Due Date: 11/16/23
Description: This program takes the Family ID and size as well as income and debt,
			calculates the expected living expenses, monthly payment, amount the
			family should save and the service fee, and displays an organized output
			that provides the user with the Family ID and size, income, debt, expected 
			living expenses, monthly payment, amount the family should save and 
			the service fee.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// declarations
	int family_id, family_size;
	float income, debt, expense, pymt, savings, fee;
	
	// constants
	const float EXPENSE1 = 4500.50;
	const float EXPENSE2 = 4700.30;
	const float EXPENSE3 = 5000.00;
	const float FEE1 = 0.01;
	const float FEE2 = 0.02;
	
	// input statements
	cout << "Please input the Family ID: ";
	cin >> family_id;
	
	cout << "Please input the Size of the Family: ";
	cin >> family_size;
	
	cout << "Please input the Annual Income: ";
	cin >> income;
	
	cout << "Pleae input the Total Debt: ";
	cin >> debt;
	
	// calculations
	/* living expenses */
	if (family_size > 4)
		expense = family_size * EXPENSE1;
	else if (family_size < 4)
		expense = family_size * EXPENSE3;
	else
		expense = family_size * EXPENSE2;
	
	/* monthly payment */ 
	if (debt > 4000)	
		pymt = debt / 24;
	else
		pymt = debt / 12;
		
	/* savings */
	savings = family_size * 0.02 * (income - debt);
	
	/* service fee */
	if (income > 30000)
		fee = income * FEE2;
	else
		fee = income * FEE1;
	
	// output statements
	cout << endl << endl << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
		<< setw(36) << "Family Budget Assistance Center" << endl
		<< setw(26) << "November 2023" << endl
		<< setw(33) << "Telephone:  (800) 555-1234" << endl
		<< "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
	cout << setiosflags(ios::showpoint)
    	<< setiosflags(ios:: fixed)
    	<< setprecision(2)
		<< endl << "Identification Number" << setw(15) << family_id << endl
		<< "Family Size" << setw(25) << family_size << endl
		<< "Annual Income" << setw(26) << income << endl
		<< "Total Debt" << setw(29) << debt << endl
		<< "Expected Living Expenses" << setw(15) << expense << endl
		<< "Monthly Payment" << setw(24) << pymt << endl
		<< "Savings" << setw(32) << savings << endl
		<< "Service Fee" << setw(28) << fee;
 
  return 0;
}
