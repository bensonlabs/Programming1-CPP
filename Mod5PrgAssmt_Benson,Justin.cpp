// Justin Benson
// CoSci139 Flores
// 10/20/19
//
// Quiz 5
// Write a program that calculates the occupancy rate for a hotel. 
// 1. The program should start by asking the user how many floors the hotel has. 
// 2. A loop should then iterate once for each floor. 
// 3. In each iteration, the loop should ask the user for the number of rooms on the floor and how many of them are occupied.  
// 4. After all iterations, the program should display how many rooms the hotel has, 
// how many of them are occupied, how many are unoccupied, and the percentage of rooms that are occupied.
// 5. The percentage may be calculated by dividing the number of rooms occupied by the number of rooms.
//
// NOTE: It is traditional that most hotels do not have a thirteenth floor. The loop in this program should skip the entire thirteenth iteration.
// Input Validation: Do not accept a value less than 1 for the number of floors. Do not accept a number less than 10 for the number of rooms on a floor.


#include <iostream>
#include <iomanip>	    	//for set setprecision

using namespace std;		//declare namespace

int
main ()
{

// 1.  Start by asking the user how many floors the hotel has.
//     Input Validation: Do not accept a value less than 1 for the number of floors. Do not accept a number less than 10 for the number of rooms on a floor.

  // declare and initialize variables
  double numRooms = 0;
  double occupancyRate = 0;
  double roomsOccupiedCount = 0;
  int emptyRooms = 0;
  int floorCount = 1;
  int numFloors = 0;
  int roomsOccupiedPerFloor = 0;
  int roomsPerFloor = 0;


  //prompt user for floor count
  cout << "How many floors does the hotel have?" << endl;
  cin >> numFloors;
  
  //verify number of floors isn't zero or negative.
  while (numFloors <= 0)
    {
      cout << "Please enter a number greater than 0. \n";
      cin >> numFloors;
    }
     
     //find room count with loop
      while (floorCount <= numFloors)
       {
          cout << "How many rooms are on floor " << floorCount << "?" << endl;
          cin >> roomsPerFloor;
       

          //verify number of floors isn't less than 10
          while (roomsPerFloor < 10)
        	{
        	  cout << "Please enter 10 or more: \n";
        	  cin >> roomsPerFloor;
        	}
      	
      	     floorCount = floorCount +1;
             numRooms = roomsPerFloor + numRooms;
             

  //verify floor 13 isn't counted (is skipped)

  //find how many rooms are occupied                 
        cout << "How many of those rooms are occupied?" << endl << endl;
        cin >> roomsOccupiedPerFloor;
        roomsOccupiedCount = roomsOccupiedPerFloor + roomsOccupiedCount;
        
            }
    
  emptyRooms = (numRooms - roomsOccupiedCount);
  occupancyRate = (roomsOccupiedCount / numRooms) * 100;

  cout << "The hotel has a total of " << numRooms << " rooms." << endl;
  cout << roomsOccupiedCount << " are occupied." << endl;
  cout << emptyRooms << " are empty." << endl;
  cout << "The occupancy rate is " << fixed << setprecision (1) <<
    occupancyRate << "%" << endl;


  system ("pause");
  return 0;
}

