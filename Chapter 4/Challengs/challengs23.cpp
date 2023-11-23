#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159;

    // Tao menu.
    cout <<" May tinh hinh hoc" << endl;
    cout <<" 1. Tinh dien tich hinh tron " << endl;
    cout <<" 2. Tinh dien tich hinh chu nhat " << endl;
    cout <<" 3. Tinh dien tich tam giac " << endl;
    cout <<" 4. Bo cuoc " << endl;
    cout <<" Nhap lua chon cua ban: ";

    int chon;
    cin >> chon;

    while (chon < 1 || chon > 4)
    {
        cout <<" Lua chon khong hop le. Vui long chon lai: ";
        cin >> chon;
    }

    switch (chon)
    {
    case 1: 
    {
        double radius;
        cout <<" Nhap ban kinh hinh tron: ";
        cin >> radius;
        while ( radius < 0)
        {
            cout <<" Ban kinh khong the am vui long nhap lai: ";
            cin >> radius;
        }
        double area = PI * radius *radius;
        cout << " Dien tich hinh tron la: " << area << endl;
        break;
    }
    case 2: 
    {
        double length, width;
        cout <<" Nhap chieu dai hinh chu nhat: ";
        cin >> length;
        while (length < 0)
        {
            cout <<" Chieu dai khong the am. Vui long nhap lai: ";
            cin >> length;
        }
        cout <<" Nhap chieu rong hinh chu nhat: ";
        cin >> width;
        while (width < 0)
        {
            cout <<" Chieu rong khong the am. Vui long nhap lai: ";
            cin >> width;
        }
        double area = length * width;
        cout <<" Dien tich hinh chu nhat la: " << area << endl;
        break;
    }
    case 3: 
    {
        double base, height;
        cout <<" Nhap chieu dai day tam giac: ";
        cin >> base;
        while (base < 0)
        {
            cout <<" Chieu dai day khong the am. Vui long nhap lai:";
            cin >> base;
        }
        cout <<" Nhap chieu cao tam giac: ";
        cin >> height;
        while (height < 0)
        {
            cout <<" Chieu cao khong the am. Vui long nhap lai: ";
            cin >> height;
        }
        double area = base * height * 0.5;
        cout <<" Dien tich hinh tam giac la: " << area << endl;
        break;
    }
    case 4: 
    {
        cout <<" Ket thuc " << endl;
        break;
    }
    
    }

    return 0;
}