/***********************************************************************/
/*Author:Jason Stengel												   */
/*Project:ICE16                                                        */
/*Description:                                                         */
/*Modify the program above to accept names as well as quiz scores.Use  */
/*pointer notation only.											   */
/***********************************************************************/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//functions
void BubbleSort(double *pScores, string *pNames, int arr_size);
void AverageScore(double *pScores, double *dAverage, int arr_size);

int main()
{
	int arr_size, count;
	string *pString;
	double *dAverage = new double(0.0), *ps;

	cout << "How many test scores? ";
	cin >> arr_size;

	while (arr_size < 1)
	{
		cout << "Error. At least one score required. Enter a number greater than zero: ";
		cin >> arr_size;
	}

	double *pScores = new double[arr_size];
	string *pNames = new string[arr_size];

	cin.ignore();
	for (pString = pNames, count = 1; count <= arr_size; count++, pString++)
	{
		cout << "Enter name #" << count << ": ";
		getline(cin, *pString);
	}
	for (ps = pScores, pString = pNames, count = 1; count <= arr_size; count++, ps++, pString++)
	{
		cout << "Enter score for " << *pString << ": ";
		cin >> *ps;
	}

	BubbleSort(pScores, pNames, arr_size);
	cout << "\n";

	for (ps = pScores, pString = pNames, count = 0; count < arr_size; count++, ps++, pString++)
	{
		cout << *pString << "  " << *ps << endl;
	}


	AverageScore(pScores, dAverage, arr_size);
	cout << "\n";
	cout <<"The Average score is " << setprecision(2) << *dAverage;

	delete [] pScores;
	delete [] pNames;

	return 0;
}

void BubbleSort(double *pScores, string *pNames, int arr_size)
{
	int maxElement, count;
	double *ps;
	string *pString;
	for (maxElement = arr_size - 1; maxElement > 0; maxElement--)
	{
		for (pString = pNames, ps = pScores, count = 0; count < maxElement; count++, ps++, pString++)
		{
			if (*ps > *(ps + 1))
			{
				double temp = *ps;
				*ps = *(ps + 1);
				*(ps + 1) = temp;

				string sTemp = *pString;
				*pString = *(pString + 1);
				*(pString + 1) = sTemp;
			}
		}
	}
}

void AverageScore(double *pScores, double *dAverage, int arr_size)
{
	double *ps, dTotal = 0;
	int count;
	for (ps = pScores, count = 0; count < arr_size; ps++, count++)
	{
		dTotal += *ps;
	}
	*dAverage = (dTotal / arr_size);
}
/*
How many test scores ?0
Error.At least one score required.Enter a number greater than zero : 10
Enter score #1: 100
Enter score #2: 90
Enter score #3: 95
Enter score #4: 89
Enter score #5: 88
Enter score #6: 87
Enter score #7: 94
Enter score #8: 95
Enter score #9: 92
Enter score #10: 91
87
88
89
90
91
92
94
95
95
100
Average score is 92.1
*/
