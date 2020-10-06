#include <iostream>
using namespace std;


int main()
{
	bool a = false;
	bool b = false;



	int num1 = 12;
	int num2 = 5;
	int num3 = 7;

	if (a)
	{
		num1 += 10;
		num2 += 15;

	}

	if (b)
	{
		num1++;
		num3 += 20;
	}

	if (!b && !a)
	{
		num1--;
		num2--;
		num3--;
	}

	cout << "Num1: " << num1 << "\n" << "Num2: " << num2 << "\n" << "Num3: " << num3 << "\n" << endl;
}
