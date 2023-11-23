// This porgram uses the address of ech element in the array.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_COINS = 5;
    double coins[NUM_COINS] = {0.05, 0.1, 0.25, 0.5, 1.0};
    double *doublePtr = nullptr;            // Pointer to a double
    int count;                              // Array index

    // use the pointer to display the vvalue in the array.
    cout << " Here are the value i the coins array: \n";
    for( count =0; count < NUM_COINS; count++);
    {
        // Get the address of an array element.
        doublePtr = &coins[count];

        // Display the contents of the element.
        cout << *doublePtr << " ";

    }
    cout << endl;
    return 0;
}