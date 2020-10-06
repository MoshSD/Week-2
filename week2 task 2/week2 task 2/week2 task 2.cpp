#include <iostream>
using namespace std;





int main()
{
    bool a = true;

    if (a)
    {
        cout << "true\n";
    }

    int num1 = 0, num2 = 0, num3 = 0;
    
    if (a)
    {
        num1 += 12;
        num2 += 5;
        num3 += 7;

    }

    cout << "Num1: " << num1 << " " << "Num2: "  << num2 << " "  << "Num3: " << num3; 


}

