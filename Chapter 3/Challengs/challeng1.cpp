#include <iostream>
using namespace std;

int main()
{
    float gallon;
    float mile;
    float mgp;

    cout << " Nhap so gallon xang ma chiec xe co the chua duocL ";
    cin >> gallon;

    cout << " Nhap sp dam ma nos co the di duoc tren mot chiec xe: ";
    cin >> mile;

    mgp = mile / gallon;

    cout << " Muc do tieu thu nhien lieu cua o to la " << mgp << endl;
    return 0;

}