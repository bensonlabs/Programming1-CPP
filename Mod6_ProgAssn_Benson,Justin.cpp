// Justin Benson
// CoSci139 Flores
// 11/03/19
//
// Quiz 6
// A particular talent competition has five judges, each of whom awards a score between 0 and 10 to each performer.
// Fractional scores, such as 8.3, are allowed. A performer’s final score is determined by dropping the highest and lowest score received,
// then averaging the three remaining scores. Write a program that uses this method to calculate a contestant’s score.
// It should include the following functions:
//
// * a. void getJudgeData( ) should ask the user for a judge’s score, store it in a reference parameter variable, and validate it.
//   This function should be called by main once for each of the five judges.
// * b. void calcScore( ) should calculate and display the average of the three scores that remain after dropping the highest and
//   lowest scores the performer received. This function should be called just once by main and should be passed the five scores.
//
// The last two functions, described below, should be called by calcScore, which uses the returned information to determine which of the scores to drop.
//
// * c. double findLowest( ) should find and return the lowest of the five scores passed to it.
// * d. double findHighest( ) should find and return the highest of the five scores passed to it.
//
// Input Validation: Do not accept judge scores lower than 0 and higher than 10.
/////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>

using namespace std;

//Function prototypes
void getJudgeData(double &judgeScore);
void calcScore(double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);

int main()
{
	//variables
	double judge1 = 0, judge2 = 0, judge3 = 0, judge4 = 0, judge5 = 0;
	
	getJudgeData(judge1);
	getJudgeData(judge2);
	getJudgeData(judge3);
	getJudgeData(judge4);
	getJudgeData(judge5);

/*	//testing stored values
	cout << judge1 << endl;
	cout << judge2 << endl; 
	cout << judge3 << endl;
	cout << judge4 << endl;
	cout << judge5 << endl;
*/
    calcScore(judge1, judge2, judge3, judge4, judge5);

	system("pause");
	return 0;
}
//getJudgeDataData function	
void getJudgeData(double &judgeScore) //should ask the user for a judge’s score, store it in a reference parameter variable, and validate it.
		{
			//input judge score
			cout << "Enter a judge's score: ";
			cin >> judgeScore;

			//validate number is between 0-10
			while (judgeScore < 0.0 || judgeScore > 10.0)
			{
				cout << "The score must be between 0.0 and 10.0 \n";
				cout << "Enter a judge's score: ";
				cin >> judgeScore;
			}
		}

////////////////////////////////////////////////////////////////////////////////////////////////
//should calculate and display the average of the three scores that remain after dropping the highest and
//lowest scores the performer received. This function should be called just once by main and should
//be passed the five scores.
////////////////////////////////////////////////////////////////////////////////////////////////
void calcScore(double score1, double score2, double score3, double score4, double score5)
	{
	//variables	
	//find the lowest score
		double lowest = findLowest(score1, score2, score3, score4, score5);
	
		//find the highest score
		double highest = findHighest(score1, score2, score3, score4, score5);
	
		//add the scores together
		double judgesSubtotalScore = (score1 + score2+ score3+ score4+ score5);

		//calulate to get judgesFinalScore
		double judgesFinalAvg = (judgesSubtotalScore - highest - lowest) / 3.0;

	cout << "After dropping the lowest and highest scores, the average score was " << setprecision(2) << fixed << showpoint << judgesFinalAvg<< " ." << endl;
    }
    
///////////////////////////////////////////////////////////////////////////////////////////////	

    //find the lowest score
	double findLowest(double score1, double score2, double score3, double score4, double score5) //finds the min
	{
		double lowest = 0; // declares lowest as min

		if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5) //sets score1 as min
		{
			lowest = score1;
		}
			if (score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5) //score2 as min
			{
				lowest = score2;
			}
				if (score3 < score2 && score3 < score1 && score3 < score4 && score3 < score5) //score3 as min
				{
					lowest = score3;
				}
					if (score4 < score2 && score4 < score3 && score4 < score1 && score4 < score5) //score4 as min
					{
						lowest = score4;
					}
						if (score5 < score2 && score5 < score3 && score5 < score4 && score5 < score1) //score5 as min
						{
							lowest = score5;
						}

		return lowest; // returns lowest as the value of findLowest
	}
	
	////////////////////////////////////////////////////////////////////////////////////////////////

	double findHighest(double score1, double score2, double score3, double score4, double score5) //finds max
	{
		double highest = 0; //declares highest as max
        
        //find the highest score
		if (score1 > score2 && score1 > score3 && score1 > score4 && score1 > score5) //sets score1 as max
		{
			highest = score1;
		}
			if (score2 > score1 && score2 > score3 && score2 > score4 && score2 > score5) //score2 as max
			{
				highest = score2;
			}
				if (score3 > score2 && score3 > score1 && score3 > score4 && score3 > score5) //score3 as max
				{
					highest = score3;
				}
					if (score4 > score2 && score4 > score3 && score4 > score1 && score4 > score5) //score4 as max
					{
						highest = score4;
					}
						if (score5 > score2 && score5 > score3 && score5 > score4 && score5 > score1) //and score5 as max
						{
							highest = score5;
						}

		return highest; //returns highest as the value of findHighest
	
}


// S C R A T C H
/*


*/