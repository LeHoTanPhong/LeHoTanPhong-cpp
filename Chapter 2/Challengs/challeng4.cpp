#include <iostream>
using namespace std;

int main()
{
    double tienBuaan= 88.67;

    double thue = tienBuaan * 0.0676;

    double tong = tienBuaan + thue;

    double tip= tong *0.2;

    cout << " Chi phi bua an laa: $" << tienBuaan <<endl;
    cout << " Thue: $" << thue << endl;
    cout << " Tien boa: $" << tip << endl;
    cout << " Tong hoa don: $" << tong << endl;

    return 0;
}