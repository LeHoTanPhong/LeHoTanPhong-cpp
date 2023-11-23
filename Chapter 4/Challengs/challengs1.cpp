#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << " Nhap so thu nhat: ";
    cin >> a;
    cout << " Nhap so thu hai: ";
    cin >> b;

    // Xac dinh so toi thieu.
    int min, max;
    if( a < b)
    {
     min = a;
     max = b;
    }
    else
    {
        min = b;
        max = a;
    }
    
    // In ra so toio thieu va toi da
    cout << " So toi thieu la: " << min << endl;
    cout <<" So toi da la: " << max << endl;

    return 0;

}