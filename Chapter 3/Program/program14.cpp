// This program demonsrates the setw manipulator being 
// used with value of various data type.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int intValue = 39228;
    double doubleValue = 91.5;
    string stringValue = " John J. Smith";

    cout << " (" << setw(5) << intValue << " )" << endl;
    cout << " (" << setw(8) << doubleValue<< " )" << endl;
    cout << " (" << setw(16) << stringValue << " )" << endl;
    return 0;
}