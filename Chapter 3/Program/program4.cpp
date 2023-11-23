// This program asks the user to enter the numerator
// and denominator of a fraction and it displays the 
// decimal value.

#include <iostream>
using namespace std;

int main()
{
    double numerator, denominator;

    cout << " This program shows the decimal value of ";
    cout << " a fraction.\n";
    cout << " Enter the numerator: ";
    cin >> numerator;
    cout << " Enter the denminator: ";
    cin >> denominator;
    cout << " The decimal balue is ";
    cout <<(numerator / denominator ) <<endl;
    return 0;
}