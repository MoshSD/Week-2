#include <iostream>
using namespace std;


int choice;

int main()
{
	cout << "Please choose an option: 1.Sunny 2.Cloudy 3.Raining 4.Exit" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Bring sunscreen" << endl;
	break;

	case 2:
		cout << "It may rain, bring a coat!" << endl;
	break;
	
	case 3:
		cout << "Take an umbrella, it will rain for sure!" << endl;
	break;

	default:
		cout << "The program will now exit" << endl;
		exit(0);


	}

}

