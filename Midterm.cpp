/*	Justin Benson
	CoSci139 Flores
	11/17/19

	Midterm
	Write a program that computes and displays the charges for a patient’s hospital stay.  First, the program should ask
	if the patient was admitted as an inpatient or an outpatient. If the patient was an inpatient, the following data should be entered:

	* The number of days spent in the hospital
	* The daily rate
	* Hospital medication charges
	* Charges for hospital services(lab tests, etc.)
	
	The program should ask for the following data if the patient was an outpatient:
	* Charges for hospital services(lab tests, etc.)
	* Hospital medication charges
	
	The program should use two overloaded functions to calculate the total charges.
	One of the functions should accept arguments for the inpatient data, 
	while the other function accepts arguments for outpatient information.
	Both functions should return the total charges.

	Input Validation : Do not accept negative numbers for any data.
*//*****************************************************************************************************************************************/

//My solution heavily references "Starting out with C++, Early Objects by Tony Gaddiss, 8th Ed., page 380 

#include <iostream>
#include <iomanip>														

using namespace std;

//function prototypes
char getChoice();  //menu selection
double calcInpatientCharges(int, double, double, double);
double calcOutpatientCharges(double, double);

//1.
int main()
{
	//variables
	char selection;
	int numDays = 0; //The number of days spent in the hospital
	double dailyRoomRate = 0; //daily room rate
	double medCharges; //medication charges
	double labFees = 0; //lab fees and other service charges

	//ask user to choose inpatient or outpatient
	cout << "This program will compute patient hospital charges.\n";
	cout << "What was the patient type?\n";
	cout << "In-patient or Out-patient? (I or O).\n";
	selection = getChoice();

//2. work it out with a switch
	switch (selection)
	{
		//inpatient
		case 'I':
		case 'i':   cout << "Number of days in the hospital: ";
			cin >> numDays;
			cout << "Daily room rate: $";
			cin >> dailyRoomRate;
			cout << "Medication charges: $";
			cin >> medCharges;
			cout << "Lab fees and other service charges: $";
			cin >> labFees;
			cout << "The total charges are $";
			cout << calcInpatientCharges(numDays, dailyRoomRate, medCharges, labFees) << endl;
			break;

		//outpatient
		case 'O':
		case 'o':   cout << "Medication charges: $";
			cin >> medCharges;
			cout << "Lab fees and other service charges: $";
			cin >> labFees;
			cout << "The total charges are $";
			cout << calcOutpatientCharges(medCharges, labFees) << endl;
	}

	return 0;
}

//3.
/*******************************************************
 *                      getChoice                      *
 * accepts and returns users's validated menu choices  *
 ******************************************************/
char getChoice()
{
	char letter;  //holds users choice

//get the users choice
	cin >> letter;

	//validate the choice
	while (letter != 'I' && letter != 'i' && letter != 'O' && letter != 'o')
	{
		cout << "Please enter I or O: ";
		cin >> letter;
		//return the choice
	}
	return letter;
}

//4.
/**************************************************************
 *					   calcInpatientCharges                   *
 *                                                            *
 * This function calcs and returns all inpatient expeneses.   *
 * Parameters numDays, dailyRoomRate, medCharges, and labFees *
 * hold the valvues of their respective descriptions.         *
 * ************************************************************/
double calcInpatientCharges(int numDays, double dailyRoomRate,
	double medCharges, double labFees)
{
	return (numDays * dailyRoomRate) + medCharges + labFees;
}

//5.
/**************************************************************
*				     calcOutpatientCharges                   *
*                                                            *
* The function calcs and returns all outpatient expeneses.   *
* Parameters medCharges and labFees hold the values of       *
* their respective descriptions.                             *
* ************************************************************/
double calcOutpatientCharges(double medCharges, double labFees)
{
	return (medCharges + labFees);
}
