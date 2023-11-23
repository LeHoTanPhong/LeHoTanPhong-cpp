#include <iostream>
using namespace std;

int main()
{
    string date;
    cout <<" Nhap ngay (mm/dd/yyyy): ";
    cin >> date;

    int month = stoi(date.substr(0, 2));
    int day = stoi(date.substr(3, 2));
    int year = stoi(date.substr(6));

    cout <<" Ngay" << day << " thang " << month << " nam " << year << endl;

    return 0;
}