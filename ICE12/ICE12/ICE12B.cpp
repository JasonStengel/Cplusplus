



DocViewer








Page  of 2




Zoom




























Pages










/*
Author: Jason Stengel
Name: ICE12B
Description:
Write a program that lets a maker of chips and salsa keep track of sales
for
five different types of salsa: mild, medium, sweet, hot, and zesty
The program should use two parallel 5 element arrays: an array of strings
that holds the five salsa
names and an array of integers that holds the number of jars sold during
the past month for each salsa type
The salsa names should be stored using an initialization list at the time
the name array is created.
The program should prompt the user to enter the number of jars sold for
each type
Once this sales data has been entered
the program should produce a report that displays sales for each salsa
type
total sales and the names of the highest selling and lowest selling
products
Input Validation Do not accept negative values for number of jars sold
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	const int ARR_SIZE = 5;
	string sSalsaType[ARR_SIZE]{ "mild", "medium", "sweet", "hot",
		"zesty" };
	int iAmountSold[ARR_SIZE];
	int iTotal = 0, iLargest = 0, iSmallest = 0;
	string sHighSeller, sLowSeller;

	//asks user for each type sold
	for (int x = 0; x < ARR_SIZE; x++)
	{
		cout << "Jars sold last month of " << sSalsaType[x] << ":";

		cin >> iAmountSold[x];
		while (iAmountSold[x] < 0)
		{
			cout << "Jars sold must be 0 or more. Please re-enter: ";
			cin >> iAmountSold[x];
		}
		iTotal += iAmountSold[x];
	}
	//gets the least and most of the chips sold
	for (int x = 0; x < ARR_SIZE; x++)
	{
		if (iAmountSold[x] > iLargest)
		{
			iLargest = iAmountSold[x];
			sHighSeller = sSalsaType[x];
		}
		if (iAmountSold[x] < iSmallest || iSmallest == 0)
		{
			iSmallest = iAmountSold[x];
			sLowSeller = sSalsaType[x];
		}
	}

	//prints to the user the amount of each type sold, total, and the most and least sold
	cout << "Salsa sales Report" << endl << endl
		 << "Names Jars Sold" << endl
		 << "------------------" << endl;
	for (int x = 0; x < ARR_SIZE; x++)
	{
		cout << sSalsaType[x] << "   " <<
			iAmountSold[x] << endl;
	}
	cout << "Total Sales: " << iTotal << endl;
	cout << "High Seller: " << sHighSeller << endl;
	cout << "Low Seller: " << sLowSeller << endl;
	return 0;
}

/*
Jars sold last month of mild: 1200
Jars sold last month of medium: 1445
Jars sold last month of sweet: 2345
Jars sold last month of hot: 7476
Jars sold last month of zesty: 356
Salsa sales Report
Names Jars Sold
------------------
mild   1200
medium   1445
sweet   2345
hot   7476
zesty   356
Total Sales: 12822
High Seller: hot
Low Seller: zesty
*/




Annotations
