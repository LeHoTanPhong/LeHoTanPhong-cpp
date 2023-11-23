// This program demonstrates a problem thay occurs
// wwhen you mix cin >> witj cin.get().
#include <iostream>
using namespace std;

int main()
{
    char ch;
    int number;

    cout << " Enter a number: ";
    cin >> number;
    cout << " Enter a character: ";
    ch = cin.get();
    cout << " Thank you!\n ";
    return 0;
}