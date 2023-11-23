#include <iostream>
using namespace std;

int main()
{
    const float phanTramdoanhThuboDong= 0.58;

    float TongdoanhThu= 8600000;

    float doanhThuboDong = phanTramdoanhThuboDong * TongdoanhThu;

    cout << " Doanh thu du kien cua bo dong la: " << doanhThuboDong << " trieu USD. " << endl;
    return 0;
}