/*
Justin Benson
CoSci139 Flores
11/30/19

Quiz 8
1. Write a program that uses two identical arrays of at least 20 integers.
2. It should call a function that uses the bubble sort algorithm to sort one of the arrays in ascending order.
3. The function should keep count of the number of exchanges it makes.
4. The program then should call a function that uses the selection sort algorithm to sort the other arrays.
5. It should also keep count of the number of exchanges it makes. Display these values on the screen.
*/

#include <iostream>

using namespace std;		//declare name space

//Function prototypes
void bubbleSort(int [], int, int&);
void selectionSort(int [], int, int&);
void dispResults(int, int);

int main()
{
//1. Write a program that uses two identical arrays of at least 20 integers.
   
    //Declare and initialize variables
	const int SIZE = 20;
	int values1[SIZE] = {5, 7, 2, 8, 9, 1, 4, 3, 6, 10, 20, 11, 19, 12, 18, 13, 17, 14, 16, 15};
	
    int values2[SIZE] = {5, 7, 2, 8, 9, 1, 4, 3, 6, 10, 20, 11, 19, 12, 18, 13, 17, 14, 16, 15};
						
    int exch1 = 0, exch2 = 0;
    
//2. It should call a function that uses the bubble sort algorithm to sort one of the arrays in ascending order.

    bubbleSort(values1, SIZE, exch1);

//4. The program then should call a function that uses the selection sort algorithm to sort the other arrays.

    selectionSort(values2, SIZE, exch2);

//Display these values on the screen.

    dispResults(exch1, exch2);

system("pause");
return 0;
}


/************************************************************
 * 							bubbleSort 			    		*
 * This function performs an ascending-order bubble sort    *
 * on array. The parameter size holds the number of elements*
 * in the array.                                            *
 ***********************************************************/
 void bubbleSort(int array[], int size, int &exch1)
 {  
	int temp;
	bool swap;
	
	do
	{   swap = false;
	    for (int count = 0; count < (size - 1); count++)
	    {
	        if (array[count] > array[count + 1])
	        {
	            temp = array[count];
	            array[count] = array[count + 1];
	            array[count + 1] = temp;
	            swap = true;
	            exch1++;
	          
	        }
	    }
	    
	} while(swap);  //loop again if a swap occured on this pass

 }
 
 /***********************************************************
 * 						selectionSort 			    		*
 * This function performs an ascending-order selection sort *
 * on array. The parameter size holds the number of elements*
 * in the array.                                            *
 ***********************************************************/
 void selectionSort(int array[], int size, int &exch2)
 {
	int startScan, minindex, minValue;
	for (int startScan = 0; startScan < (size - 1); startScan++)
	{
		minindex = startScan;
		minValue = array[startScan];
		for(int index = startScan + 1; index < size; index++)
		{
 			if (array[index] < minValue)
			{
				minValue = array[index];
				minindex = index;
				exch2++;
			}
		}
			array[minindex] = array[startScan];
			array[startScan] = minValue;
    }
}

/**********************************************************
*			   dispResults          					  *
* This function displays the count of each exchange.	  *
**********************************************************/
void dispResults(int exch1, int exch2)
{	
	cout << exch1 << "  exchanges were made by Bubble Sort" << endl;
	cout << exch2 << "  exchanges were made by Selection Sort" << endl;
}

// Works cited:  Gaddis, "Starting out with C++ Early Objects, 8th Edition"