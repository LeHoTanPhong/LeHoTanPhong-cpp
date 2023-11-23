#include <iostream>
using namespace std;

int main()
{
    // Nhập khối lượng và khoảng cách.
    double khoiLuong, khoangCach;
    cout <<" Nhap trong luong cua goi hang:";
    cin >> khoiLuong;
    cout <<" Nhap khoang cach so hang se duoc van chuyen: ";
    cin >> khoangCach;

    if( khoiLuong <= 0)
    {
        cout <<" Khoi luong khong duoc am hoac bang khong vui long nhap lai:";
        cin >> khoiLuong;
    }
    if( khoiLuong > 20)
    {
        cout <<" khoi luong khong duoc qua 20 kg. Vui long nhap lai khoi luong:";
        cin >> khoiLuong;
    }
    if( khoangCach < 10)
    {
        cout <<" Khoang cach khong duoc nho hon 10 dam. Vui long nhap lai khoang cach: ";
        cin >> khoangCach;
    }
    if( khoangCach > 3000)
    {
        cout <<" Khoang cach khong duoc lon hon 3000 dam. Vui long nhap lai khoang cach: ";
        cin >> khoangCach;
    }   

    double phiVanchuyen = 0.0;
    int soLan = khoangCach / 500;
    if(khoiLuong > 2 && khoiLuong <= 6)
    {
        phiVanchuyen = 1.10 * soLan;
    }
    else if( khoiLuong > 6 && khoiLuong <= 10)
    {
        phiVanchuyen = 2.2 * soLan;
    }
    else if( khoiLuong > 10 && khoiLuong <= 20 )
    {
        phiVanchuyen = 4.8 *soLan;
    }

   // Hiẻn thị kết quả.
    cout <<" Phi van chuyen la: " << phiVanchuyen << " $" << endl;
    return 0;
}