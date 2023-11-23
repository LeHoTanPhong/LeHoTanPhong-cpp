#include <iostream>
using namespace std;

int main()
{
    // Nhap so luong san pham da ban.
    int soLuong;
    cout <<" Nhap so luong san pham da ban: ";
    cin >> soLuong;

    while (soLuong <= 0)
    {
        cout <<" So luong phai lon hon 0. Vui long nhap lai so luong san pham: ";
        cin >> soLuong;
    }

    // Tinh tong tien mua.
    double donGia = 99.0;
    double chiPhimua;

    if(soLuong >=10 && soLuong <= 19)
    {
        chiPhimua = donGia*(1 -0.2);
    }
    else if(soLuong >= 20 && soLuong <= 49)
    {
        chiPhimua= donGia*( 1 - 0.3);
    }
    else if(soLuong <= 50 && soLuong <= 99)
    {
        chiPhimua= donGia*( 1 -0.4);
    }
    else if( soLuong >= 100)
    {
        chiPhimua = donGia*(1-0.5);
    }
    else
    {
        chiPhimua = donGia;
    }

    // Hien thi ra man hinh.
    cout <<" Chi phi mua san pham la: " << chiPhimua << endl;
    return 0;
}