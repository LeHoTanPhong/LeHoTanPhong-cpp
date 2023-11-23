#include <iostream>
using namespace std;

int main()
{
    int day, months, years;
    cout << " Nhap ngay: ";
    cin >> day;
    cout << " Nhap thang: ";
    cin >> months;
    cout << " Nhap nam (hai chu so): ";
    cin >> years;

    int product = months * day;
    if( product == years)
    {
        cout <<" Ngay thang la ngay ki dieu!" << endl;
    }
    else
    {
        cout << " Ngay thang khong phai la ngay dieu ki " << endl;
    }
    return 0;
}