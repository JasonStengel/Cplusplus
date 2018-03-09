/*
Author: Jason Stengel
Project: ICE11A
Decription:
Write a program to compute miles per gallon of a car, over a long trip.
The car begins the trip with a full tank, and each fuel stop along the way
fills the tank again.
You will not do any math, arithmetic, or computations in the main
function.
All output will be displayed from the main function.
Use an unsigned function GetOdometer to get the current odometer reading
from the user.
Use a double function GetFuel to get the number of gallons from the user.
Use a void function named ComputeTankMPG to compute the miles per gallon
of
each tank of fuel on the trip. Do not use cout in this function.
Use a void function named ComputeTripMPG to compute the miles per gallon
of the entire trip.
This is computed by dividing the total trip miles by the total trip
gallons. Do not use cout in this function.
Your main function should do no arithmetic operations whatsoever
comparisons such as "greater than" are not arithmetic operations, so you
may use those in main.
Do not use global variables now or ever.
*/

#include <iostream>

using namespace std;

//prototypes
unsigned GetOdometer(unsigned & uGetOdometer, unsigned & currentOdometer, int & iTotalMiles, int & iStartingMiles);
double GetFuel(double & dFuelUsed);
void ComputeTankMPG(int iStartingMiles, unsigned & uGetOdometer, double dFuelUsed, double & dTankMpg, int & iMilesTraveled, double & dTotalGas,unsigned & currentOdometer);
void ComputeTripMPG(double & dTotalGas, double & dTripMpg, int & iTotalMiles);

int main()
{
	//variable declaration
	double dFuelUsed, dTripMpg, dTankMpg, dTotalGas = 0;
	unsigned uTripMiles, uGetOdometer, currentOdometer;
	int iStartingMiles, iMilesTraveled,iTotalMiles;

	cout << "Enter the starting odometer<Full Tank>: " << endl;
	cin >> iStartingMiles;
	currentOdometer = iStartingMiles;

	do
	{
		while (isdigit(uGetOdometer))
		{
		GetOdometer(uGetOdometer, currentOdometer, iTotalMiles, iStartingMiles);
		}
		if (uGetOdometer != 0)
		{
			GetFuel(dFuelUsed);
			ComputeTankMPG(iStartingMiles, uGetOdometer, dFuelUsed, dTankMpg, iMilesTraveled, dTotalGas, currentOdometer);
			cout << "The tank of " << dFuelUsed << " gal. of fuel took us " << iMilesTraveled << " miles, yielding " << dTankMpg << " MPG." << endl;
		}
	} while (uGetOdometer != 0); // while for do loop

	ComputeTripMPG(dTotalGas, dTripMpg, iTotalMiles);

	cout << "The MPG for the trip was" << dTripMpg << " with " << dTotalGas << " gallons used " 
		 << " traveling " << iTotalMiles << "Miles" << endl;

	return 0;
}
//function to get the odometer after filling up
unsigned GetOdometer(unsigned & uGetOdometer, unsigned & currentOdometer, int & iTotalMiles, int & iStartingMiles)
{
	cout << "Enter next odometer reading:" << endl;
	cin >> uGetOdometer;

	if (uGetOdometer != 0)
	{
		iTotalMiles = uGetOdometer - iStartingMiles;
	}
	while (currentOdometer > uGetOdometer && uGetOdometer != 0)
	{
		cout << "Error! your previous odometer reading was " << currentOdometer << ". Did you drive in reverse ? " << endl;
		cout << "Re-Enter odometer: " << endl;
		cin >> uGetOdometer;
	}
	return uGetOdometer;
}
//function to get fuel used
double GetFuel(double & dFuelUsed)
{
	cout << "Enter gallons of fuel: " << endl;
	cin >> dFuelUsed;

	while (dFuelUsed > 18.25)
	{
		cout << "Error! your tank only holds 18.25 gallons of fuel" << endl;
		cin >> dFuelUsed;
	}
	return dFuelUsed;
}
//function to calculate the MPG of current tank
void ComputeTankMPG(int iStartingMiles, unsigned & uGetOdometer, double dFuelUsed, double & dTankMpg, int & iMilesTraveled, double & dTotalGas,unsigned & currentOdometer)
{
	static int count = 0;

	if (count == 0)
	{
		iMilesTraveled = uGetOdometer - iStartingMiles;
		dTankMpg = (iMilesTraveled / dFuelUsed);
		dTotalGas += dFuelUsed;
		currentOdometer = uGetOdometer;
		count++;
	}
	else
	{
		iMilesTraveled = uGetOdometer - currentOdometer;
		dTankMpg = (iMilesTraveled / dFuelUsed);
		dTotalGas =dTotalGas + dFuelUsed;
		currentOdometer = uGetOdometer;
	}
}
//function to calculate the MPG of the whole trip
void ComputeTripMPG(double & dTotalGas, double & dTripMpg, int & iTotalMiles)
{
	dTripMpg = iTotalMiles / dTotalGas;
}

