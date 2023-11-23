#include <iostream>
using namespace std;

int main()
{
    int dai1, dai2, rong1, rong2;
    cout <<" Nhap chieu dai hinh chu nhat thu nhat: ";
    cin >> dai1;
    cout << "Nhap chieu rong hinh chu nhat thu nhat: ";
    cin >> rong1;
    cout <<" Nhap chieu dai hinh chu nhat thu 2: ";
    cin >> dai2;
    cout <<" Nhap chieu rong hinh chu nhat thu 2 ";
    cin >> rong2;

    int S1 = dai1 * rong1;
    int S2 = dai2 * rong2;

    if( S1 > S2)
    {
        cout <<" Dien tich hinh chu nhat thu nhat lon hon " << endl;
    }
    else if( S1 < S2)
    {
        cout <<" Dien tich hinh chu nhat thu hai lon hon" << endl;
    }
    else 
    {
        cout <<" Dien tich 2 hinh chu nhat bang nhau " << endl;
    }
    return 0;
}