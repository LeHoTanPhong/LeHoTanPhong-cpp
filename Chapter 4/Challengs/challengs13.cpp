#include <iostream>
using namespace std;

int main()
{
    // Nhap so luong sach da mua.
    int soLuongsach;
    cout <<" Nhap so luong sach da mua: ";
    cin >> soLuongsach;

    int soDiemthuong = 0;
    switch (soLuongsach)
    {
    case 0: soDiemthuong = 0;
        break;
    case 1: soDiemthuong = 5;
        break;
    case 2: soDiemthuong = 15;
        break;
    case 3: soDiemthuong = 30;
        break;
    default: soDiemthuong = 60;
        break;
    }
    
    // Hien thi ra man hinh.
    cout <<" So diem duoc thuong la: " << soDiemthuong << endl;
    return 0;
}