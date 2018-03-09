/*
Autor: Jason Stengel
Title: ICE07A
Description://((
Write a program that prompts the user to enter the names of two primary colors to mix.
If the user enters anything other than red blue or yellow the program should display an error message.
Otherwise, the program should display the name of the secondary color that results by mixing two primary colors.
Use if - else statements and exit with an error message if 2 different primary colors are not entered as input.
*/
//program runs properly inside VS15

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	string sColor1, sColor2;
	cout << "The primary colors are red, blue, and yellow. "
		<< endl << "Which two primary colors do you want to mix?" << endl << endl;

	cout << "Enter the first primary color in lower case letters: " << endl;
	getline(cin, sColor1);
	cout << "Enter the second primary color in lower case letters: " << endl;
	getline(cin, sColor2);


	if (sColor1 == "red" || sColor1 == "yellow" || sColor1 == "blue")
	{
		if (sColor2 == "red" || sColor2 == "yellow" || sColor2 == "blue")
		{
			//if the color red is picked first
			if (sColor1 == "red")
			{
				if (sColor2 == "blue")
				{
					cout << sColor1 << " and " << sColor2 << " make " << "purple" << endl;
				}
				else
				{
					if (sColor2 == "yellow")
					{
						cout << sColor1 << " and " << sColor2 << " make " << "orange" << endl;
					}
					else
					{
						cout << "you chose the same color twice" << endl;
					}
				}
			}
			//if the color blue is picked first
			if (sColor1 == "blue")
			{
				if (sColor2 == "red")
				{
					cout << sColor1 << " and " << sColor2 << " make " << " purple" << endl;
				}
				else
				{
					if (sColor2 == "yellow")
					{
						cout << sColor1 << " and " << sColor2 << " make " << "green" << endl;
					}
					else
					{
						cout << "Error: The two colors you entered are the same." << endl;
					}
				}
			}
			//if the color yellow is picked first
			if (sColor1 == "yellow")
			{
				if (sColor2 == "blue")
				{
					cout << sColor1 << " and " << sColor2 << " make " << " green" << endl;
				}
				else
				{
					if (sColor2 == "red")
					{
						cout << sColor1 << " and " << sColor2 << " make " << "orange" << endl;
					}
					else
					{
						cout << "Error: The two colors you entered are the same." << endl;
					}
				}
			}
		}
		else
		{
			cout << "Error: The second color you entered is invalid." << endl;
		}
	}
	else
	{
		cout << endl << "Error: The first color you entered is invalid." << endl;
	}

	return 0;
}
