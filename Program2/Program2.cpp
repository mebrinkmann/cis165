/*  Meghan Brinkmann
	CIS 165
	October 19, 2023
	Program Project 2

	This program takes the number of adult and child seats sold 
	and calclates and displays the seat type, cost/seat, # sold, 
	gross revenue, amount paid to distributor, and net 
	profit of a movie theater's seats.
*/
 
 #include<iostream>
 #include <iomanip>
 
 using namespace std;
 
int main()
{
    
	// local definitions
	int adult_sold, child_sold; 
	int adult_gross_rev, child_gross_rev, adult_dist_amount, child_dist_amount;
	int adult_net_profit, child_net_profit;
	
	const int adult_cost = 10;
	const int child_cost = 6;

	// input lines
	cout << "Enter number of adult seats sold: ";
	cin >> adult_sold;
	
	cout << "Enter number of child seats sold: ";
	cin >> child_sold;
	
	// calculations
	adult_gross_rev = adult_cost * adult_sold;
	child_gross_rev = child_cost * child_sold;
	
	adult_dist_amount = adult_gross_rev * 0.2;
	child_dist_amount = child_gross_rev * 0.2;
	
	adult_net_profit = adult_gross_rev - adult_dist_amount;
	child_net_profit = child_gross_rev - child_dist_amount;
	
	// outputs
	
	cout << setw(50) << endl << endl << "************************" << endl;
	cout << setw(50) << "*  Movie Seats Income  *" << endl;
	cout << setw(50) << "************************" << endl << endl;
	
	cout << setw(46) << "Gross" << setw(19) << "Amount Paid" << endl;
	cout << setw(9) << "Seat Type" << setw(14) << "Cost/Seat" << setw(11) << "# Sold" << setw(12) << "Revenue" << setw(19) << "to Distributor" << setw(16) << "Net Profit" << endl;
	cout << setw(9) << "---------" << setw(14) << "---------" << setw(11) << "------" << setw(12) << "-------" << setw(19) << "--------------" << setw(16) << "----------" << endl << endl;
	cout << setw(9) << "Adult" << setw(10) << "$" << setw(3) << adult_cost << setw(11) << adult_sold << setw (12) << adult_gross_rev << setw(19) << adult_dist_amount << setw(16) << adult_net_profit << endl;
	cout << setw(9) << "Child" << setw(10) << "$" << setw(3) << child_cost << setw(11) << child_sold << setw (12) << child_gross_rev << setw(19) << child_dist_amount << setw(16) << child_net_profit << endl;
		
	return 0;
}
