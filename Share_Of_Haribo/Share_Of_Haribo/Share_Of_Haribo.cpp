#include <iostream>
using namespace std;

int hariboPackets = 40;
int numberOfStudents = 14;

int main()
{
	int remainder = hariboPackets % numberOfStudents;
	int packsPerPerson = hariboPackets / numberOfStudents;

	cout << "The amount of packs per person is: " << packsPerPerson << ". The remainder left is: " << remainder << endl;

}

