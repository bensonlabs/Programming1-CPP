//Justin Benson
//CoSci139 Flores

//Write a program which:
//Prompts the user to enter 5 numbers.
//Once the user has entered the 5 numbers, the program should calculate and display the average of the 5 numbers.

#include <iostream>
//set namespace to standard
using namespace std;

int main() {
	//declare float variables value1-value5 and average
	float value1 = 0, value2 = 0, value3 = 0, value4 = 0, value5 = 0, avg = 0;
	
	// message giving instruction
	cout << "Enter the 1st integer, then press Enter: " << endl;
	// prompts for 1st value
	cin >> value1;

	cout << "Enter the 2nd integer, then press Enter: " << endl;
	// prompts for 2nd value
	cin >> value2;

	cout << "Enter the 3rd integer, then press Enter: " << endl;
	// prompts for 3rd value
	cin >> value3;

	cout << "Enter the 4th integer, then press Enter: " << endl;
	// prompts for 4th value
	cin >> value4;

	cout << "Enter the 5th integer, then press Enter: " << endl;
	// prompts for 5th value
	cin >> value5;

	// calcuate the average of all vaules.  Add them all and divide by 5.
	avg = (value1 + value2 + value3 + value4 + value5) / 5;

	// output average value
	cout << "The average of " << value1 << " + " << value2 << " + " << value3 << " + " << value4 << " + " << value5 << " = " << avg << '\n';
	
	//use non ANSI C compliant command to pause program execution
	system("pause");
	// set return code
	return 0;
}
//THANK YOU FOR ALL THE FEEDBACK, PROFESSOR!
