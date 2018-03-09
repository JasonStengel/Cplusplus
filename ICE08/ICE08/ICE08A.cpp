/*
Author:Jason Stengel
Description:
The program should start by asking the user for a seed value
for the random number generator, srand. It should then display two random
numbers
10-999 that are to be added, subtracted, multiplied or divided.
*/

#include <iomanip>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int num1, num2, sum, uUserAnswer, uUserChoice, iTemp = 0;
	const char CLETTER1 = 'A', CLETTER2 = 'E';
	const unsigned MIN = 10, MAX = 999;
	char cUserChoice, cMathType;
	cout << "Enter a seed value (0 - 2123456789):" << endl;
	cin >> uUserChoice;
	srand(uUserChoice);
	num1 = rand() % MAX + MIN;
	num2 = rand() % MAX + MIN;
	cout << "Welcome to Math Tutor. Please make a selection: " << endl;
	cout << "A. Addition" << endl
		<< "B. Subtraction" << endl
		<< "C. Multiplication" << endl
		<< "D. Division" << endl
		<< "E. Exit" << endl;
	cin >> cUserChoice;
	while ((cUserChoice < CLETTER1) || cUserChoice > CLETTER2)
	{
		cout << "Error. Invalid choice. Enter A - E:" << endl;
		cin >> cUserChoice;
	}
	while (cUserChoice < CLETTER2 || cUserChoice > CLETTER2)
	{
		switch (cUserChoice)
		{
			//case for addition
			case 'A':
			{
				sum = num1 + num2;
				cMathType = '+';
				break;
			}
			//case to do subtraction
			case 'B':
			{
				if (num1 < num2)
				{
					iTemp = num1;
					num1 = num2;
					num2 = iTemp;
				}
				sum = (num1 - num2);
				cMathType = '-';
				break;
			}
			//case for multiplacation
			case 'C':
			{
				sum = num1 * num2;
				cMathType = '*';
				break;
			}
			//case for division
			case 'D':
			{
				if (num1 < num2)
				{
					iTemp = num1;
					num1 = num2;
					num2 = iTemp;
				}
				sum = num1 / num2;
				cMathType = '/';
				break;
			}
		}//switch
		cout << right << setw(5) << num1 << endl
			<< right << cMathType << setw(4) << num2 <<
			endl
			<< "__________" << endl << endl;
		cin >> uUserAnswer;
		//checks if answer is right
		if (uUserAnswer == sum)
		{
			cout << endl << "Congratulations! That is the correct answer." << endl;
		}
		else
		{
			cout << "Sorry, the correct answer is " << sum
				<< "." << endl;
		}
		//gets new random numbers
		num1 = rand() % MAX + MIN;
		num2 = rand() % MAX + MIN;
		cout << "Please make another selection:" << endl;
		cout << "A. Addition" << endl
			<< "B. Subtraction" << endl
			<< "C. Multiplication" << endl
			<< "D. Division" << endl
			<< "E. Exit" << endl;
		cin >> cUserChoice;
		while ((cUserChoice < 'A') || cUserChoice > 'E')
		{
			cout << "Error. Invalid choice. Enter A - E:"
				<< endl;
			cin >> cUserChoice;
		}//while
	}//while
}//main
 /*
 Enter a seed value (0 - 2123456789):
 5
 Welcome to Math Tutor. Please make a selection:
 A.  Addition
 B.  Subtraction
 C.  Multiplication
 D.  Division
 E.  Exit
 B
 722
 -  55
 __________
 667
 Congratulations! That is the correct answer.
 Please make another selection:
 A.  Addition
 B.  Subtraction
 C.  Multiplication
 D.  Division
 E.  Exit
 A
 268
 + 474
 __________
 742
 Congratulations! That is the correct answer.
 Please make another selection:
 A.  Addition
 B.  Subtraction
 C.  Multiplication
 D.  Division
 E.  Exit
 */