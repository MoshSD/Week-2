#include <iostream>
using namespace std;

int main()
{
	char playAgain;

	cout << "Would you like to play again? (Y/N)" << endl;
	cin >> playAgain;


	//Making sure that the user has input leniancy
	playAgain = toupper(playAgain);

	switch (playAgain)
	{
	case 'Y':
		cout << "You chose to play again" << endl;
	break;

	case 'N':
		cout << "Goodbye" << endl;
	break;

	default:
		//I would loop the main function if I actually wanted to use this as a program then re-run the function if this was happening
		cout << "You have inputted something that is not Y or N" << endl;
		

	}




}
