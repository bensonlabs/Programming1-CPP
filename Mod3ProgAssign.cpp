//Justin Benson
//CoSci139 Flores
//9/21/19

/*
Quiz 3:  Write a program which:
-Generates two positive integers at random within the 1 – 10 range.
-Displays the sum, difference, product and quotient of the two randomly generated numbers
-The results must be displayed with two decimal places after the decimal point.
*/

#include <iostream>
#include <cstdlib>  // include the cstandard library to be able to call rand() funciton
#include <ctime>  // include ctime library for access to time() function

using namespace std;  //declare namespace

int main() {

	// declare and initialize all variables
	float random1 = 0.0, random2 = 0.0, sum = 0, difference = 0, product = 0, quotient = 0;
	//double max_range = 11;
	
		srand(time(0));				//seed random number for rand()
		random1 = rand() % 11;	// generate random1 number from 1-10
		random2 = rand() % 11;	// generate random2 number from 1-10

	//display random numbers
		cout << "First random number: " << random1 << "\n";
		cout << "Second random number: " << random2 << "\n";
		
	//find and display the sum of random1 and random2
		sum = (random1 + random2);
		cout << "The sum of " << random1 << " + " << random2 << " = " << sum << "\n";

	//find the difference of random1 and random2
		difference = random1 - random2;
		cout << "The difference of " << random1 << " - " << random2 << " = " << difference << "\n";
				
	//find the product of random1 and random2
		product = random1 * random2;
		cout << "The product of " << random1 << " * " << random2 << " = " << product << "\n";
		
	//find the quotient of random1 and random2
		quotient = random1 / random2;
		cout << "The quotient of " << random1 << " / " << random2 << " = " << quotient << "\n";

	system("pause");		
	return 0;

}

