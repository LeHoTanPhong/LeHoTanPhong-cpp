#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Khai bao bien.
    int quarter, pennies, nickels, dimes;
    double tongGiatri;

    // Nhap so luong moi loai dong xu.
    cout <<" Nhap so luong quarter: ";
    cin >> quarter;
    cout <<" Nhap so lupng pennies: ";
    cin >> pennies;
    cout << "Nhap so luong nickels: ";
    cin >> nickels;
    cout <<" Nhap so luong dime: ";
    cin >> dimes;

    // Tinh tong gia tri cua cac dong xu
    tongGiatri = quarter * 0.25 + pennies * 0.01 + dimes * 0.1 + nickels *0.25;

    // So sanh gia tri voi 1 dola
    if( tongGiatri == 1)
    {
        cout << fixed << setprecision(2);
        cout <<" Chuc mung ban la nguoi chien thang. Tong gia tri la $" << tongGiatri << endl;
    }
    if(tongGiatri > 1)
    {
        cout <<" Ban da nhap nhieu hon mot dola. Tong gia tri la $" << tongGiatri << endl;
    }
    else 
    {
        cout <<" Ban da nhap it hon mot dola. Tong gia tri la $" << tongGiatri << endl;
    }
    return 0;
}