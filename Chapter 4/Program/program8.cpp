// This program uses the moduls operstor to determine
// if a number is odd or even. If the number is evenly divisible
// by 2, ut is an even number. A remainder indicates it is odd.
#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << " Enter a integer and I will tell you ig it\n";
    cout << " is odd or even.";
    cin >> number;
    if( number % 2 == 0)
        cout << number << " is even.\n";
    else 
        cout << number << " is odd.\n";
    return 0;
}