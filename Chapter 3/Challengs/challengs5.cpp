#include <iostream>
using namespace std;

int main()
{
    int soNam;
    int soNu;
    float tyLeNam;
    float tyLeNu;

    cout << " Nhap so nam trong lop: ";
    cin >> soNam;

    cout << " Nhap so nu trong lop: ";
    cin >> soNu;

    tyLeNam = (float)soNam / (soNam + soNu);
    tyLeNu = (float)soNu / (soNam + soNu);

    cout << " Ty le nam trong lop la: " << tyLeNam * 100 << " %" << endl;
    cout << " Ty le nu trong lop la: " << tyLeNu * 100 << " %" << endl;

    return 0;
}