#include <iostream>
using namespace std;

// Ham yeu cau nguoi dung nhap chieu dai cua hinh chu nhat
double getLength()
{
double length;

cout <<" Nhap chieu dai cua hinh chu nhat: ";
cin >> length;

while ( length < 0)
{
    cout <<" Chieu dai khong duoc am. Vui long nhap lai: ";
    cin >> length;
}
return length;
}

// Ham yeu cau nhap chieu rong hinh chu nhat
double getWidth()
{
    double width;

    cout <<" Nhap chieu rong cua hinh chu nhat: ";
    cin >> width;

    while ( width < 0)
    {
        cout <<" Chieu rong khong duoc am. Vui long nhap lai: ";
        cin >> width;
    }
    return width;
}

// Ham tinh dien tich cua hinh chu nhat.
double getArea (double length, double width )
{
    return length * width;
}

// ham hien thi chieu dai, chieu rong va dien tich cua hinh chu nhat.
void displayData( double length, double width, double area)
{
    cout <<" Chieu dai: " << length << endl;
    cout <<" Chieu rong: " << width << endl;
    cout <<" Dien tich: " << area << endl;
}

int main()
{
    double length = getLength();
    double width = getWidth();

    double area = getArea(length, width);

    displayData( length, width, area);
    return 0;
}