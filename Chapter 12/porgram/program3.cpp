// This porgram uses the setprecision and fixed
// mainpulators to format file output.
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    fstream dataFile;
    double num = 17.816392;

    dataFile.open("numfile.txt", ios::out);     // Open in output mode
    
    dataFile << fixed;          // Format for fixed-point notation
    dataFile << num << endl;            // Write the number

    dataFile << setprecision(4);    // Format for 4 decimal places
    dataFile << num << endl;

    dataFile << setprecision(3);
    dataFile << num << endl;

    dataFile << setprecision(2);
    dataFile << num << endl;

    dataFile << setprecision(1);
    dataFile << num << endl;

    cout << "Done.\n";
    dataFile.close();
    return 0;
}