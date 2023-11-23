#include <iostream>
using namespace std;

int main()
{
    string thang1, thang2, thang3;
    float luongMua1, luongMua2, luongMua3;
    float luongMuaTB;

    cout << " Nhap ten thang 1:";
    cin >> thang1;
    cout << " Nhap luong mua cua thang 1: ";
    cin >> luongMua1;
    
    cout << " Nhap ten thang 2: ";
    cin >> thang2;
    cout << " Nhap luong mua cua thang 2: ";
    cin >> luongMua2;
    
    cout << " Nhap ten thang 3: ";
    cin >> thang3;
    cout << " Nhap luong mua cua thang 3: ";
    cin >> luongMua3;

    luongMuaTB = (luongMua1 +luongMua2 +luongMua3) / 3;

    cout << " Luong mua trung binh trong 3 thang la: " << luongMuaTB << " inch" << endl;

    return 0;


}