// Tihis program demnstrates how file stream object may
// be passed by reference to function.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function prototypes
bool openFileIn(fstream &, string);
void showContents(fstream &);

int main()
{
    fstream dataFile;

    if( openFileIn(dataFile, "demofile.txt"))
    {
        cout << " File opened successfully.\n";
        cout << " Now reading data from the file.\n\n";
        showContents(dataFile);
        dataFile.close();
        cout << "\nDone.\n";
    }
    else
        cout << " File open erroe!" << endl;
    return 0;
}

// *********************************************************
// Definition of function openFileIn. Accepts a reference  *
// to an fstream object as an argument. the file is opened *
// for input. The function returns true upon success, false*
// upon failure.                                           *
// *********************************************************

bool openFileIn(fstream &file, string name)
{
    file.open(name, ios::in);
    if(file.fail())
        return false;
    else
        return true;
}

// *********************************************************
// Definition of function showContents. Accpets an fstream *
// reference as its argument. Uses a loop to read each name*
// form the file and displays it on the screen.            *
// *********************************************************

void showContents(fstream &file)
{
    string line;

    while (file >> line)
    {
        cout << line << endl;
    }
}
