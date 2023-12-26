/*
	Meghan Brinkmann
	CIS-165
	Chapter 6 Homework 2 - Page 254 Example 3
*/

#include <iostream>
#include <cmath>
using namespace std;

double rightTriangle(double a, double b)	//function header
{
	double c = sqrt((a * a) + (b * b));
	
	return c;
}

int main(void)
{
	double a, b, c;
	
	cout << "Enter the sides of the triangle separated by a space: ";
	cin >> a >> b;
	
	double hypotenuse = rightTriangle(a,b);
	
	cout << "The hypotenuse of the triangle is " << hypotenuse << endl;

	
	return 0;
}
