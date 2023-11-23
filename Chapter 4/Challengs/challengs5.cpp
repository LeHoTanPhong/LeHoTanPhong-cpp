#include <iostream>
using namespace std;

int main()
{
    int chieuCao, canNang;
    // Nhap chi so can nang va chieu cao.
    cout <<" Nhap chi so chieu cao: ";
    cin >> chieuCao;
    cout <<" Nhap chi so can nang: ";
    cin >> canNang;

    // Tinh chi so BMI
    float BMI = ((canNang*703) / ( chieuCao * chieuCao));
    cout <<" Chi so BMI cua ban la: " << BMI << endl;

     if (BMI < 18.5) 
     {
    cout << "Ban bi thieu can." << endl;
  } 
    else if (BMI < 25) {
    cout << "Ban co can nang binh thuong." << endl;
  } 
  else 
  {
    cout << "Ban bi thua can." << endl;
  }

  return 0;
}