#include <iostream>
using namespace std;

int main()
{
    // Khai bao bien khoi luong.
    float khoiLuong;
    // Nhap chi so khoi luong.
    cout <<" Nhap so khoi luong cua vat: ";
    cin >> khoiLuong;

    // Tinh trong luong cua vat.
    float trongLuong = khoiLuong * 9.8;
    
    // In trong luong ra man hinh.
    cout <<" Trong luong cua vat la: " << trongLuong << endl;

    // So sanh
    if( trongLuong > 1000)
    {
        cout <<" Vat qua nang." << endl;
    }
    else if( trongLuong < 10);
    {
        cout << " Vat qua nhe." << endl;
    }
    return 0;
}