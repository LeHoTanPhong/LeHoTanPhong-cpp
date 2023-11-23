#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    string fileName;
    cout <<" Nhap ten ten: ";
    getline(cin, fileName);

    ifstream file(fileName);

    if (!file.is_open())
    {
        cout <<" Khong the mo tep. Kiem tra lai ten tep.\n";
        return 1;
    }

    string line;
    int lineCount = 0;

    while (getline(file, line) && lineCount < 10)
    {
        cout << line << endl;
        lineCount++;
    }

    file.close();
    if (lineCount == 0)
    {
        cout <<" Tep trong.\n";
    }
    else if ( lineCount < 10)
    {
        cout <<" Toan bo tep da duoc hien thi.\n";
    }

    return 0;
}