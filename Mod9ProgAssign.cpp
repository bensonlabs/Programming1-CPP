/*
Justin Benson
CoSci139 Flores
12/08/19

Quiz 9
Write a program that dynamically allocates an array large enough to hold a user-defined number of test scores.
Once all the scores are entered, the array should be passed to a function that sorts them in ascending order.
Another function should be called that calculates the average score. 
The program should display the sorted list of scores and averages with appropriate headings. 
Use pointer notation rather than array notation whenever possible.

Input Validation: Do not accept negative numbers for test scores.
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getData(double *, int);
void selectionSort(double *, int);
double getAverage(double *, int);
void displayData(double *, int, double);

int main()
{
//Write a program that dynamically allocates an array large enough to hold a user-defined number of numTest scores.

    //Declare and initialize variables
	double *numTest;		//dynamically allocate array for number of tests
	double average;
	int scores;			

	// Get number of scores
	cout << "How many test scores will you enter? ";
	cin  >> scores;
	while(scores < 0)
    	{
    		cout << "The number cannot be negative.\n";
    		cout << "Enter another number: ";
    		cin >> scores;
    	}

//Dynamically allocate an array larger enough to hold the user-defined number of scores.
	numTest = new double[scores];
	
	getData(numTest, scores);
	
//Once all the scores are entered, the array should be passed to a function that sorts them in ascending order	
	selectionSort(numTest, scores);
	
//Another function should be called that calculates the average score.
	average = getAverage(numTest, scores);

//The program should display the sorted list of scores and averages with appropriate headings. 
	displayData(numTest, scores, average);

system("pause");
return 0;
}

//********************************************************************************
//                                 getData                                       *
// This function asks user to input numTest scores that are stored in an array.  *
// The parameter scores holds the number of numTest score to be input.           *
//******************************************************************************** 
void getData(double *numTest, int scores)
{
	for (int i = 0; i < scores; i++)
	{
		do
		{
			cout << "Enter test score " << (i + 1) << ": ";
			cin  >> *(numTest + i);

			if (*(numTest + i) < 0)
			{
				cout << "Negative scores are not allowed." << endl;
				cout << "Enter another score for this test: " << endl;
			}

		} while (*(numTest + i) < 0);
	}
}
//*****************************************************************************
//                              selectionSort                                 * 
// Function performs an ascending-order selection sort on the numTest array   *
// The paramere scores holds the number of scores in the array.               *
//*****************************************************************************
void selectionSort(double *numTest, int scores)
{
	int startScan, minIndex;
	double minValue;

	for (startScan = 0; startScan < (scores - 1); startScan++)
	{
		minIndex = startScan;
		minValue = *(numTest + startScan);
		for (int i = startScan + 1; i < scores; i++)
		{
			if (*(numTest + i) < minValue)
			{
				minValue = *(numTest + i);
				minIndex = i;
			}
		}
		
		*(numTest + minIndex) = *(numTest + startScan);
		*(numTest + startScan) = minValue;
	}
} 
//***************************************************************************** 
//                               getAverage                                   *
// This function calculates the average of the scores stored in an array.     *
// The parameter scores holds the number of scores to average.                * 
//*****************************************************************************
double getAverage(double *numTest, int scores)
{
	double total;
	double avg;

	for (int i = 0; i < scores; i++)
	{
		total += *(numTest + i);
	}
	//return total / scores;
  avg = total / scores;
    
} 

//*****************************************************************************
//                              displayData                                   *
//*****************************************************************************
void displayData(double *numTest, int scores, double avg) 
{
	cout << "\nThe test scores in ascending-order, are:" << endl << endl;
	cout << " Score" << endl;
	cout << " -----" << endl;
	
	for (int i = 0; i < scores; i++)
	{
		cout << fixed << showpoint << setprecision(2) << "  " << *(numTest + i) << endl;
	}
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "Average score: " << avg << endl; 
}
