#include <iostream>
using namespace std;

int main()
{
    // Nhap so du dau ky va so luong sec do.
    double soDudauKy, soLuongSeach;
    cout <<" Nhap so du dau ki: ";
    cin >> soDudauKy;

    cout <<" Nhap so luong Sech: ";
    cin >> soLuongSeach;

    if(soLuongSeach < 0)
    {
        cout <<" Tao khoan da bi rut qua muc. Xin vui long nhap lai: ";
        cin >> soLuongSeach;
    }

    double phiSeach = 0.0;
    if( soLuongSeach < 20)
    {
        phiSeach = 0.1 * soLuongSeach;
    }
    else if( soLuongSeach < 40)
    {
        phiSeach = 0.08 * soLuongSeach;
    }
    else if( soLuongSeach <60)
    {
        phiSeach = 0.06 *soLuongSeach;
    }
    else 
    {
        phiSeach = 0.04 * soLuongSeach;
    }

    double phiDichvu = 10.0 + phiSeach;

    double phiVuotqua = 0.0;

    if(soDudauKy < 400)
    {
        phiVuotqua = 15.0;
    }

    double tongPhi = phiDichvu + phiVuotqua;

    // Hiển thị ra màn hình chính.
    cout <<" Phi dich vu cua ngan hang trong thang la: " << tongPhi << " $" << endl;
    return 0;
}