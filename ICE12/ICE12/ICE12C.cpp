/*
Author: Jason Stengel
Project: ICE12C
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int MAX = 80;
	char msg[MAX];
	int iCounter[26]{ 0 };

	cout << "Enter a sentance or word: ";
	cin.getline(msg, MAX);
	//for loop to count the amount of each letter
	for (int j = 0; j < MAX; j++)
	{
		iCounter[msg[j] - 'a']++;
	}
	//loop to print each letter and the times used to user
	for (int j = 0; j < 26; j++)
	{
		cout << static_cast<char>(j + 'a') << " - " <<
			iCounter[j] << endl;
	}
	return 0;
}
/*
Enter a sentance or word: i am going to the store
a - 1
b - 0
c - 0
d - 0
e - 2
f - 0
g - 2
h - 1
i - 2
j - 0
k - 0
l - 0
m - 1
n - 1
o  - 3
p - 0
q - 0
r - 1
s - 1
t - 3
u - 0
v - 0
w - 0
x - 0
y - 0
z - 0
*/
