/*  Meghan Brinkmann
	CIS 165
	October 12, 2023
	In-class Assignment - Exercise 2
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  // Local Declarations
    float grade1, grade2, grade3; 
   	float total, average;
                                   
  // Program Statements
	cout << "Enter grade 1: ";
	cin >> grade1;
	cout << "Enter grade 2: ";
	cin >> grade2;
	cout << "Enter grade 3: ";
	cin >> grade3;
	total = grade1 + grade2 + grade3;
    average = total/3;
	cout << "\t\tThe average grade is " << average  << endl << endl;
    cout << setw(5) << "GRADE" << setw(10) << "AVERAGE" << setw(25) << "DIFFERENCE FROM AVERAGE" << endl;
    cout << setw(5) << grade1 << setw(10) << average << setw(25) << grade1 - average << endl;
    cout << setw(5) << grade2 << setw(10) << average << setw(25) << grade2 - average << endl;
    cout << setw(5) << grade3 << setw(10) << average << setw(25) << grade3 - average << endl;
    return 0;
}

