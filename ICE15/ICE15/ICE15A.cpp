#include <iostream>
#include <string>

using namespace std;

//functions
bool IsPalindrome(string sPhrase);
int main()
{
	string sPhrase = "";
	char cContinue = 'y';
	while (cContinue == 'y')
	{
		cout << "Enter Phrase: " << endl;
		cin >> sPhrase;
		if (IsPalindrome(sPhrase))
		{
			cout << "Palindrome found!" << endl;
		}
		else
		{
			cout << "NOT a palindrome" << endl;
		}
		cout << "Go again (y/n):";
		cin >> cContinue;
	}
	return 0;
}
bool IsPalindrome(string sPhrase)
{
	bool isPal = true;
	string * psPhrase;
	string sReverse;

	psPhrase = &sReverse;
	*psPhrase = string(sPhrase.rbegin(), sPhrase.rend());

	for (int x = 0; x < sPhrase.length(); x++)
	{
		sPhrase[x] = toupper(sPhrase[x]);
		sReverse[x] = toupper(sReverse[x]);
	}

		//check the string with itself in reverse
		if (sPhrase != sReverse)
		{
			isPal = false;
			return isPal;
		}
		else 
		{
			return isPal;
		}
}
/*
Enter Phrase:
Dog
NOT a palindrome
Go again (y/n):y
Enter Phrase:
doD
Palindrome found!
Go again (y/n):y
Enter Phrase:
dod
Palindrome found!
Go again (y/n):y
Enter Phrase:
RaCecAr
Palindrome found!
Go again (y/n):
*/
