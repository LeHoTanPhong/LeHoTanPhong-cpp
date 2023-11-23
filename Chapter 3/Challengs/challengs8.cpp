#include <iostream>
using namespace std;

int main()
{
    float rong = 100.0;
    float day = 0.0;
    float MoWidget = 12.5;
    float soLuongWidget = 0;

    cout << " Nhap trong luong pallet trong:\n ";
    cin >> rong;

    cout << " Nhpa trong luong pallet co vat dung xep chong len nhau: ";
    cin >> day;

    day= day -rong;

    soLuongWidget = day / MoWidget;

    cout << " So luong bay dung xep chong len nhau la: " <<soLuongWidget << endl;
    return 0;
}