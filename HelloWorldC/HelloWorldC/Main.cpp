#include <iostream>
#define MULT(x, y) x * y
using namespace std;

void main() {
	char sHello[11] = { 'H','e','l','l','o','W','o','r','l','d','!'};

	for (int x = 0; x < sizeof(sHello); x++) {
		cout << sHello[x];
		if (x == 4) {
			cout << " ";
		}
	}
	cout << "MULT(1, 2) = " << MULT(1, 2) << endl;
	cin.get();
	
}

/*
Hello World!

*/

