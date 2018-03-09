/*
Author: Jason Stengel
Project: ICE04
Description:
Write a program that asks the user for an angle, entered in radians. The program should then display the sine,
cosine, and tangent of the angle. (Use the sin, cos, and tan library functions to determine these values.)
The output should be displayed in fixed-point notation, rounded to four decimal places of precision.

*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

	//part I

	//declared variables
	double radians, dSine, cosine, tangent;

	//ask user for angle
	cout << "What is the angle? ";
	cin >> radians;

	//gets the sine cosine and tangent from angle
	dSine = sin(radians);
	cosine = cos(radians);
	tangent = tan(radians);

	//prints to screen each with 4 decimal points
	cout << setprecision(4) << "The sine is " << dSine << ", The cosine is " << cosine << ", The tangent is " << tangent << endl << endl;


	//part II calculates interest after a year
	double dInterestRate, dPrincipal, dInterest, dAmountSaved;
	int iTimesCompounded = 12;

	//ask user for investment, interest, and times compounded
	cout << "What is the initial investment? " << endl;
	cin >> dPrincipal;

	cout << "What is the interest rate? " << endl;
	cin >> dInterestRate;
	dInterestRate = dInterestRate * .01;

	cout << "what is the amount of times it will compound? \n";
	cin >> iTimesCompounded;

	dAmountSaved = dPrincipal * pow(1 + dInterestRate / iTimesCompounded, iTimesCompounded);
	dInterest = dAmountSaved - dPrincipal;

	cout << "Interest rate:	            " << dInterestRate * 100 << "%" << endl
		<< "Times Compounded:           " << iTimesCompounded << endl
		<< "Principal:                 $" << dPrincipal << endl
		<< "Interest:                  $" << dInterest << endl
		<< "Amount in Savings          $" << dAmountSaved << endl << endl;



	//part III Write a program to convert light-minutes to miles.
	double dLightMinutes, dDistanceLightMinute = 11160000;
	long long llTotalMiles;
	int minutesInYear = 525600, iYears;



	cout << "What is the amount of light minutes? " << endl;
	cin >> (double)dLightMinutes;
	cin.ignore();

	llTotalMiles = dDistanceLightMinute * dLightMinutes;
	cout << "Whats the amount of light years to convert? ";
	cin >> iYears;
	cout << "The distance in miles is: " << llTotalMiles << endl;

	llTotalMiles = (iYears * minutesInYear) * dDistanceLightMinute;
	cout << "The distance converted from light years is " << llTotalMiles << " miles." << endl;
	cin.ignore();
	cin.get();
	return 0;
}
/*
What is the angle? 25
The sine is -0.1324, The cosine is 0.9912, The tangent is -0.1335

What is the initial investment?
1000
What is the interest rate?
2
what is the amount of times it will compound?
12
Interest rate:              2%
Times Compounded:           12
Principal:                 $1000
Interest:                  $20.18
Amount in Savings          $1020

What is the amount of light minutes?
1200
Whats the amount of light years to convert? 900
The distance in miles is: 13392000000
The distance converted from light years is 5279126400000000 miles.
*/