#include <iostream>
using namespace std;

// Ham tinh quy mo dan so trong mot nam.
int tinh_quy_mo_dan_so (int quy_mo_truoc_day, float ty_le_sinh, float ty_le_tu_vong)
{
    if( quy_mo_truoc_day < 2)
    {
        cout <<" Kich thuoc bat dau phai lon hon 2." << endl;
        return -1;
    }
    if (ty_le_sinh < 0)
    {
        cout <<" Ty le sinh khong hop le. " << endl;
        return -1;
    }
    if ( ty_le_tu_vong < 0)
    {
        cout <<" Ty le tu vong khong hop le." << endl;
        return -1;
    }

    return quy_mo_truoc_day + quy_mo_truoc_day * ty_le_sinh - quy_mo_truoc_day * ty_le_tu_vong;
}

int main()
{
    int quy_mo_bat_dau;
    float ty_le_sinh, ty_le_tu_vong;
    int so_nam;

    cout <<" Nhap kich thuoc bat dau cua dan so: ";
    cin >> quy_mo_bat_dau;
    cout <<" NHap ty le sinh hang nam: ";
    cin >> ty_le_sinh;
    cout <<" Nhap ty le tu vong hang nam: ";
    cin >> ty_le_tu_vong;
    cout <<" Nhap so nam hien thi: ";
    cin >> so_nam;

    if ( quy_mo_bat_dau < 2)
    {
        cout <<" Kich thuoc bat dau phai lon hon 2." << endl;
        return 0;
    }
     if ( ty_le_sinh < 0)
    {
        cout <<" ty le sinh khong hop le." << endl;
        return 0;
    }
    if( ty_le_tu_vong < 0)
    {
        cout <<" Ty le tu vong khong hop le." << endl;
        return 0;
    }
    if ( so_nam < 1)
    {
        cout <<" So nam phai lon hon 1. " << endl;
        return 0;
    }

    int quy_mo = quy_mo_bat_dau;
    for ( int i = 0; i < so_nam; i++)
    {
        quy_mo = tinh_quy_mo_dan_so(quy_mo, ty_le_sinh, ty_le_tu_vong);
    }

    cout <<" Quy mo dan so sau: " << so_nam << " nam la: " << quy_mo << endl;
    return 0;
}