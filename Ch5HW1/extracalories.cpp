/*
	This program is for question 4 in Chapter 5 Homework 1
*/

#include <iostream>
using namespace std;

int main (void)

{
	float num_minutes, num_calories;
	const float CALPMIN = 3.9;
	int answer = 937;
	
	while (answer == 937)
	{
	cout << "\nPlease input the number of minutes on the treadmill: ";
	cin >> num_minutes;
	
	num_calories = num_minutes * CALPMIN;
	
	cout << "\nYou burned " << num_calories << " calories on the treadmill.";
	
	cout << "\n\nDo you want to enter another time? Enter 937 for yes: ";
	cin >> answer;
	}
	return 0;
}
