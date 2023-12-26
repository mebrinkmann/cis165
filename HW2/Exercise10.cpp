/*
	Meghan Brinkmann
	CIS-165
	Chapter 6 Homework 2
	Exercise 10
	due Dec 14 2023
*/

#include <iostream>
#include <cmath>
using namespace std;

double spherevol(double r)	//Exercise 10a
{
	double V;
	
	V = (4.0 * M_PI * pow(r, 3)) / 3.0;

	cout << "The radius of the sphere is: " << r << endl;
	cout << "The volume of the sphere is: " << V << endl;

	return V;
}

int main()	//Exercise 10b
{
	double radius;

	cout << "Enter the radius of the sphere: ";
	cin >> radius;
  
	double result = spherevol(radius);

	cout << "The result returned by the function is: " << result << endl;
  
	return 0;
}

