#include <iostream>
using namespace std;


int main()
{
    int soluongbanh = 30;
    int soluongcalo =300;
    int soluongkhauthuong = 0;
    int soluongcalotong = 0;

    cout << " Nhap so luong banh quy da an: ";
    cin >> soluongbanh;

    soluongkhauthuong = soluongbanh / soluongbanh;

    soluongcalotong = soluongkhauthuong * soluongcalo;

    cout << " Da tieu thu: " << soluongcalotong << " calo." <<endl;
    return 0;
}