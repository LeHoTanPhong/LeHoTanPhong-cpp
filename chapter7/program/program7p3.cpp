// This program reads data frm  a file into an array
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10;
    int number[ARRAY_SIZE];
    int count = 0;
    ifstream inputFile;

    // Opne the file.
    inputFile.open("TenNumbers.txt");

    // Read the number from the file into the array.
    while( count < ARRAY_SIZE && inputFile >> number[count])
        count++;

        // Close the file.
        inputFile.close();

        // Display the numbers read:
        cout << " The numbers are: ";
        for ( count = 0; count < ARRAY_SIZE; count++)
            cout << number[count] << " ";
            cout << endl;
        return 0;
}