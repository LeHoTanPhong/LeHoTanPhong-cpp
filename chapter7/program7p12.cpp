// This program uses a range-based for loop to
// modify the contents of an array.
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int numbers[5];

    // Get value for the array.
    for (int &val : numbers)
    {
        cout << " Enter an integer valude; ";
        cin >> val;  
    }

    // Display the value in the array.
    cout << " Here are the values tioi entered:\n";
    for (int val : numbers)
        cout << val << endl;

        return 0;
}