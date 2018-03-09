#include <iostream>
#include <string>
using namespace std;

int main()
{
	string make;
	int cylinders;
	double mpg;
	const int MODEL_SIZE = 80;
	char model[MODEL_SIZE];
	int topspeed;
	//priming read
	cout << "\n\nEnter name ('Q' or Enter to quit): ";
	getline(cin, make);
	//input a name into a  string
		if (make != "Q" && make != "")
		{
			cout << "Enter number cylinders: ";
			cin >> cylinders;
			cout << "Enter mpg:" ;
				cin >> mpg;
				cin.ignore();
			//clear the buffer
				cout << "Enter model:" ;
				cin.getline(model, MODEL_SIZE - 1, '\n');
			//input a name into a character array
				cout << "Enter top speed:";
				cin >> topspeed;
			cin.ignore();
			//clear the buffer between number and string
		}
		//main loop
		while(make != "Q" && make != "")
		{
			cout << "Make: "<<make << "  Model: "<< model 
				 << " cylinders: "<< cylinders <<" mpg: "
				<<mpg << "  Top speed:" << topspeed << endl;
				//see if user wants another
				cout << "\n\nEnter name ('Q' or Enter to quit): ";
			getline(cin, make);
			//input a name into a  string
				if (make != "Q" && make != "")
				{
					cout << "Enter number cylinders: ";
					cin >> cylinders;
					cout << "Enter mpg:" ;
						cin >> mpg;
					cin.ignore();
					//clear the buffer between number and string
						cout << "Enter model:" ;
						cin.getline(model, MODEL_SIZE - 1, '\n'); 
						//input a name into a character array
						cout << "Enter top speed:";
						cin >> topspeed;
					cin.ignore();
					//clear the buffer between number and string
				}
		}
	return 0;
}
