#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Hien thi menu.
    cout <<" Chon moi truong truyen am thanh: " << endl;
    cout <<" 1. Khong khi " << endl;
    cout <<" 2. Nuoc " << endl;
    cout <<" 3. Thep " << endl;
    int luaChon;
    cout <<" Nhap lua chon cua ban: ";
    cin >> luaChon;

    while (luaChon < 1 || luaChon > 3)
    {
        cout <<" Lua chon khong hop le. Vui long nhap lai: ";
        cin >> luaChon;
    }

    double khoangCach;
    cout <<" Nhap khoang cach: ";
    cin >> khoangCach;

    double thoiGian;
    switch (luaChon)
    {
    case 1:
        thoiGian = khoangCach / 1100;
        break;
    case 2:
        thoiGian = khoangCach / 4900;
        break;
    case 3:
        thoiGian = khoangCach / 16400;
        break;
    }

    // Hien thi ket qua.
    cout <<" Se mat khoang: " << fixed << setprecision(4) << thoiGian << " s" << endl;
    return 0; 
}