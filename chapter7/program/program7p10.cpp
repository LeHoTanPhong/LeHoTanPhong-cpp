// This program demonstrates the range-based for loop
#include <iostream>
using namespace std;

int main()
{

    // Define an array of integers.
    int number[] = { 10, 20, 30, 40, 50 };

    // Display the value in the array.
    for( int val : number)
        cout << val << endl;
    
    return 0;
}