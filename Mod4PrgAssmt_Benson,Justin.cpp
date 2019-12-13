/* 
Justin Benson
 CoSci139 Flores
 10/4/19

Quiz 4
	Write a program which:
	1. Prompts the user to enter a positive integer, think of this integer as representing a specific number of pennies.
	2. The program should calculate and display the least possible number of coins (quarters, dimes, nickels and cents) 
		that may be used to represent the number of pennies entered by the user. 
		For Example: If the user enters 28, then the program should display 1 quarter and 3 pennies. See other examples below.
	3. The program MUST display the results using proper grammar (singular or plural).
*/

#include <iostream>
using namespace std;  //declare namespace

int main() {

// 1.  Prompts the user to enter a positive integer, think of this integer as representing a specific number of pennies.

	// declare and initialize all variables
	int value = 0;
	const int QUARTER = 25, DIME = 10, NICKEL = 5, PENNY = 1;
	int quarters = 0, dimes = 0, nickels = 0, pennies = 0;

	//prompt user for value
	cout << "Enter a positive number of coins, >= 0: " << endl;
	cin >> value;

	// verify number isn't zero or negative
	if (value <= 0)
	{
		cout << "You entered zero or a negative number. There are no coins for zero or a negative number! \n";
		system("pause");
	}

// 2.  The program should calculate and display the least possible number of coins (quarters, dimes, nickels and cents) 
//     that may be used to represent the number of pennies entered by the user. 
//     Example: If the user enters 28, then the program should display 1 quarter and 3 pennies. See other examples below.

	//Calculate the least number of coins
	if (value >= QUARTER)
	{
		quarters = value / QUARTER;
		value = value %= QUARTER;
	}
	if (value >= DIME)
	{
		dimes = value / DIME;
		value = value %= DIME;
	}
	if (value >= NICKEL)
	{
		nickels = value / NICKEL;
		value = value %= NICKEL;
	}
	if (value >= PENNY)
	{
		pennies = value;
	}	

// 3.  The program MUST display the results using proper grammar (singular or plural).

	cout << " The following is a breakdown of the least possible number of coins: \n";
			
	// Decide between singular or plural form of coins
	if (quarters == 1)
		cout << quarters << " quarter ";
	else cout << quarters << " quarters ";

	// Decide between singular or plural form of coins
	if (dimes == 1)
		cout << dimes << " dime ";
	else cout << " dimes ";

	// Decide between singular or plural form of coins
	if (nickels == 1)
		cout << nickels << " nickle ";
	else cout << nickels << " nickels ";

	// Decide between singular or plural form of coins
	if (pennies == 1)
		cout << pennies << " penny ";
	else cout << pennies << " pennies ";
	cout << '\n';

	system("pause");
	return 0;
}

	