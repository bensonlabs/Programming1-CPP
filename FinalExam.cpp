/*
Justin Benson
CoSci139 Flores
12/15/19

FINAL EXAM

The file named Random.txt contains a long list of random numbers.
Download the file to your system, then write a program that opens the file,
reads all the numbers from the file, and calculates the following:

1. The number of numbers in the file
2. The sum of all the numbers in the file (a running total)
3. The average of all the numbers in the file
*/

#include <iostream>
#include <fstream>	//needed to use files
#include <vector>	//needed to hold values in a vector
#include <numeric>  //needed for summing and averaging

using namespace std;

int main()
{
	vector<double> numbers;	//vector to hold number data

	//Read input from Random.txt file    
	ifstream inputFile("Random.txt");

	// test file open   
	if (inputFile)
	{
		double value;	//holds values for iteration

		// read the elements in the file into a vector  
		while (inputFile >> value)
		{
			numbers.push_back(value);
		}
	}
	//find and display the number of numbers
	cout << "Number of numbers: " << numbers.size() << endl;

	//find and display sum of numbers
	cout << "Sum of the numbers: " << accumulate(numbers.begin(), numbers.end(), 0) << endl; //uses <numeric> lib

	//find and display average of numbers
	cout << "Average of the numbers: " << accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size() << "\n" << endl; //uses <numeric> lib

	// close the file
	inputFile.close();

	system("pause");
	return 0;
}

//References:  http://www.cplusplus.com/reference/vector/vector/push_back/
