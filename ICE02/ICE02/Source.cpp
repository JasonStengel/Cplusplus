/*
Author: Jason Stengel
Program: ICE02
Description: integer data type exercise
*/
#include <iostream>;
#include <string>;

using namespace std;

int main()
{
	/*cout << "Hello World!\n";*/


	//part A MPG
	unsigned int miles = 400;
	unsigned int gallons = 16;
	unsigned int MilesPerGallon;

	MilesPerGallon = miles / gallons;

	cout << miles << " miles using " << gallons << " gallons yields " << MilesPerGallon << " MPG.\n";


	//part B Theater Capacity
	unsigned int uiSmallTheater = 90;
	unsigned int uiLargeTheater = 150;
	unsigned int uiTotalCapacity;


	uiTotalCapacity = uiSmallTheater + uiSmallTheater + uiSmallTheater + uiLargeTheater;


	cout << "THe total capacity of the three theaters is " << uiTotalCapacity << " seats.\n\n\n ";

	//part C trip to venus and back
	unsigned int  uiMilesMercury = 44000000, uiMilesVenus = 31248757, uiTotalDistanceBack;

	uiTotalDistanceBack = uiMilesMercury + uiMilesVenus;

	cout << "The distance to mercury is " << uiMilesMercury << " million miles" << endl
		<< "the distance from mercury to venus is " << uiMilesVenus << " million miles" << endl
		<< "the distance back to earth is " << uiTotalDistanceBack << "million miles" << endl;

	//part D display char charachters

	char A = 'a', B = 'b', C = 'c';

	cout << A << B << C << " " << A << " " << B << " " << C << endl << A << endl << B << endl << C << endl;

	//part E display sum of 3 numbers using char

	char v1 = 33, v2 = 35, v3 = 36, vSum;

	vSum = v1 + v2 + v3;

	cout << "The sum is " << static_cast<int>(vSum) << endl;

	//part F diff in temperature

	int uiHighTemp = 43, uiSpread = 50;
	int uiNightLow;

	uiNightLow = uiHighTemp - uiSpread;

	cout << "The low Temp for the day  is " << uiNightLow << endl;

	//part G display two diff types of string 

	//const char * slFirst = "Hello,";
	string sSecond = "World";

	cout << "Hello," << sSecond << endl;


	//part H display the sum of two integers

	unsigned int uiIntOne = 60, uiIntTwo = 65, uiTotal;
	uiTotal = uiIntOne + uiIntTwo;
	cout << "The sum is " << uiTotal << endl;

	//part I
	int uiOne = -40, uiTwo = -85, uiIntTotal;
	uiIntTotal = uiOne + uiTwo;
	cout << "The sum is " << uiIntTotal << endl;

	//part J

	unsigned int uiIntThree = 64, uiIntFour = 65, uiTotalThree;
	uiTotalThree = uiIntThree + uiIntFour;
	cout << "The sum is " << uiTotalThree << endl;
	//part k
	unsigned int uiIntFive = 200, uiIntSix = 100, uiTotalFour;
	uiTotalFour = uiIntFive - uiIntSix;
	cout << "The sum is " << uiTotalFour << endl;
	//part L 
	int uiIntSeven = 200, uiIntEight = 1000, uiTotalFive;
	uiTotalFive = uiIntSeven - uiIntEight;
	cout << "The sum is " << uiTotalFive << endl;
	//part M

	cout << "*\n" << "***\n" << "*****\n" << "*******" << endl;
	//part N
	string one = "*";
	string two = "**";
	string three = "***";
	string four = "*****";
	string five = "******";

	cout << one << endl << two << endl << three << endl << four << endl << five << endl;
	//part P
	string sName = "Jason Stengel";






	cin.get();
	return 0;
}
/*
400 miles using 16 gallons yields 25 MPG.
THe total capacity of the three theaters is 420seats


The distance to mercury is 44000000 million miles
the distance from mercury to venus is 31248757 million miles
the distance back to earth is 75248757million miles
abc a b c
a
b
c
The sum is 104
The low Temp for the day  is - 7
Hello, World
The sum is 125
The sum is - 125
The sum is 129
The sum is 100
The sum is - 800
*
***
*****
*******
*
**
***
*****
******

*/