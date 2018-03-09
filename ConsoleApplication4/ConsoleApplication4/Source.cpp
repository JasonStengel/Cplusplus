#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	char month1[15], month2[15], month3[15];
	int iRainFall1, iRainFall2, iRainFall3;
	double iAvgRain3;

	cout << "what is the first month?";
	cin >> month1;
	cout << "what is the second month?";
	cin >> month2;
	cout << "what is the third month?";
	cin >> month3;


	cout << "What is the rainfall for" << month1;
	cin >> iRainFall1;
	cout << "What is the rainfall for" << month2;
	cin >> iRainFall2;
	cout << "What is the rainfall for" << month3;
	cin >> iRainFall3;

	iAvgRain3 = (iRainFall1 + iRainFall2 + iRainFall3) / 3;

	cout << setprecision(2) << "The average rainfall for" << month1 << "," << month2 << "," << month3 << "is" << iAvgRain3 << "inches";
}