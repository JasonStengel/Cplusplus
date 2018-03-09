/*
Autor Name:Jason Stengel
Project Name:ICE12A
Description:
Write a program that lets the user enter 10 values into an array.
The program should then use a loop to display the largest and smallest
values stored in the array.
Enter value #1: 5
Enter value #2: 3
Enter value #3: 6
Enter value #4: 4
Enter value #5: 8
Enter value #6: 6
Enter value #7: 1
Enter value #8: 5
Enter value #9: 7
Enter value #10: 5
Your smallest value was 1, and your largest was 8
*/

#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 10;
	int iNumbers[SIZE];
	int iLargest = 0, iSmallest = 0;
	for (int x = 0; x < SIZE; x++)

	{
		cout << "Enter value #" << x + 1 << ": ";
		cin >> iNumbers[x];
	}
	//sets default values for the largest and smallest variables
	iLargest = iNumbers[0];
	iSmallest = iNumbers[8];

	//for loop to get the smallest and largest of the numbers
	for (int x = 0; x < SIZE; x++)
	{
		iLargest = iNumbers[x] > iLargest ? iNumbers[x] :iLargest;
		iSmallest = iNumbers[x] < iSmallest ? iNumbers[x] :iSmallest;
	}

	cout << "Your smallest value was " << iSmallest << ", and your largest was " << iLargest << endl;
	return 0;
}

/*
Enter value #1: 12345
Enter value #2: 34534
Enter value #3: 456798
Enter value #4: 2
Enter value #5: 12345678
Enter value #6: 432109
Enter value #7: 56754
Enter value #8: 4
Enter value #9: 5
Enter value #10: 6
Your smallest value was 2, and your largest was 12345678
*/
