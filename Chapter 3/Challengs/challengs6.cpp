#include <iostream>
using namespace std;


int main()
{
    int SoluongBanh;
    float soLuongcucDuong, soLuongcucBo, soLuongcucBanhmi;

    cout << " Nhap so luong banh quy: ";
    cin >> SoluongBanh;

    soLuongcucDuong = (float)SoluongBanh / 48 *1.5;
    soLuongcucBo = (float)SoluongBanh / 48 *1;
    soLuongcucBanhmi = (float)SoluongBanh / 48 *2.75;

    cout << " De lam " << SoluongBanh << " chiec ban quy can: " << endl;
    cout << ". " << soLuongcucDuong << " coc duong" << endl;
    cout << ". " << soLuongcucBo << " coc bo" << endl;
    cout << ". " << soLuongcucBanhmi << "coc bot mi" << endl;
    return 0;

}