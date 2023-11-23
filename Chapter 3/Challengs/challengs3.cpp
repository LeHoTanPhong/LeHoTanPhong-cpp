#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float diem1, diem2, diem3, diem4, diem5;
    double diemTrungbinh;

    cout << " Nhap diem kiem tra mon 1: ";
    cin >> diem1;

    cout << " Nhap diem kiem tra mon 2: ";
    cin >> diem2;

    cout << " Nhap diem kiem tra mon 3: ";
    cin >> diem3;

    cout << " Nhap diem kiem tra mon 4: ";
    cin >> diem4;

    cout << " Nhap diem kiem tra mon 5: ";
    cin >> diem5;

    diemTrungbinh = ( diem1 + diem2 + diem3 + diem4 + diem5) /5;
    cout << fixed << setprecision (1);
    cout << " Diem trung binh cua 5 mon la: " << diemTrungbinh << endl;

    return 0;
}