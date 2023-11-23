#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int soVehangA;
    int soVehangB;
    int soVehangC;
    float tienThu;

    cout << " Nhap so luong ve hang A da ban: ";
    cin >> soVehangA;

    cout  << " Nhapp so luong ve hang B da ban: ";
    cin >> soVehangB;

    cout << " Nhap so luong ve hang C da ban: ";
    cin >> soVehangC;

    tienThu = soVehangA * 15 + soVehangB *12 + soVehangC *9;

    cout << fixed << setprecision(2);

    cout << " So tien da thu tu viec ban ve la: " << tienThu <<" $" << endl;
    return 0;
}