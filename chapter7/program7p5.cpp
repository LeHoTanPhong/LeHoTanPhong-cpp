// This program unsafely accesses an are of memory nu writing 
// value beyond an array's boundary.
// WARNING: If you compile and run this program, it could crash.
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 3;
    int value[SIZE];
    int count;


    // Attempt to store five numbers in the three-element array.
    cout << " I will store 5 numbers in a 3-element array! \n";
    for ( count = 0; count < 5; count++)
        value[count] =100;

        // If the program is stll running, display the numbers.
        cout << " If you see this message, it means the program\n";
        cout << " has not crashed! Here are the number: \n";
        for (count = 0; count < 5; count++)
            cout << value[count] << endl;
        return 0;

}