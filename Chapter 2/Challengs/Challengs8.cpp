#include <iostream>
using namespace std;

int main()
{
    double hang1= 15.95;
    double hang2= 24.95;
    double hang3= 6.95;
    double hang4= 12.95;
    double hang5 = 3.95;
    
    // tong so tien ban hang
    double tongTienbanHang = hang1 + hang2 +hang3 + hang4 + hang5;

    // So tien thue.
    double tienThue = tongTienbanHang * 0.07;

    // tong so tien 
    double tongTien = tongTienbanHang + tienThue;

    cout <<" Gia cua mat hang 1:" << hang1 << endl;
    cout << " Gia cua mat hang 2:" << hang2 << endl;
    cout << " Gia cua mat hang 3: " << hang3 << endl;
    cout << " Gia cua mat hang 4: " << hang4 << endl;
    cout << " Gia cua mat hang 5: " << hang5 << endl;

    // Xuat ra man hinh tong tien, tien thue, tong so tien ban hanng
    cout << " tong so tien ban hang : " << tongTienbanHang <<" $" << endl;
    cout << " Tien thue ban hang: " << tienThue << " $" << endl;
    cout << " Tong so tien: " << tongTien << " $ " << endl;
    return 0;

}