/*
Justin Benson
CoSci139 Flores
11/03/19

Quiz 7

Write a program which uses the following arrays:

empID: An array of 7 integers to hold employee identification numbers.
The array should be initialized with the following values : 1, 2, 3, 4, 5, 6, 7.

Hours: an array of seven integers to hold the number of hours worked by each employee.

payRate: an array of seven doubles to hold each employee’s hourly pay rate.

Wages: an array of seven doubles to hold each employee’s gross salary.

The program should display each employee number and ask the user to enter that employee’s hours and pay rate.
It should then calculate the gross wages for that employee(hours times pay rate) and store them in the wages array.
After the data has been entered for all the employees, the program should display each employee’s identification numberand gross wages.
*/

#include <iostream>
#include <iomanip>	    	//for set setprecision

using namespace std;		//declare namespace

int main()
{
//1. Declare and initialize variables
	//empID: An array of 7 integers to hold employee identification numbers.
	const int NUM_EMPLOYEES = 7;
	int index;
	int empID[NUM_EMPLOYEES];

	//payRate: an array of seven doubles to hold each employee’s hourly pay rate.
	double payRate[NUM_EMPLOYEES];

	//Wages: an array of seven doubles to hold each employee’s gross salary.
	double wages; //[NUM_EMPLOYEES];

	//Hours: an array of seven integers to hold the number of hours worked by each employee.
	//Input the hours worked for 7 employees
	int hours[NUM_EMPLOYEES];	//holds hours worked for 6 employees


//2. Program should display each employee number and ask the user to enter that employee’s hours and pay rate.
	cout << "Enter the requested information for each employee." << endl << endl;

	for (index =0; index < NUM_EMPLOYEES; index++)
        {
            cout << "Employee # " << (index +1) << endl;
            cout << "\tHours worked: ";
            cin >> hours[index];
            cout << "\tPay rate: $";
            cin >> payRate[index];
            cout << endl;
        }


//3. It should then calculate the gross wages for that employee(hours times pay rate) and store them in the wages array.
//   After the data has been entered for all the employees, the program should display each employee’s identification numberand gross wages.
    cout << "------------------------------\n";
    cout << "Employee\tWages\n";
    cout << "------------------------------\n";
    for (index = 0; index < NUM_EMPLOYEES; index++)
        {
            wages = hours[index] * payRate[index];
            cout << "Employee #" << (index + 1);
            cout << ":     $" << setw(1) << wages << endl << endl;
        }

	//system("pause");
	return 0;
}


