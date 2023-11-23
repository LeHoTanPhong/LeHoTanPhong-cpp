#include <iostream>

using namespace std;

int main() {
  // Khởi tạo phí
  const double priceA = 39.99;
  const double priceB = 59.99;
  const double priceC = 69.99;
  const double rateA = 0.45;
  const double rateB = 0.40;

  // Nhập gói
  int package;
  cout << "Chon goi cua ban (A, B, C): ";
  cin >> package;

  // Xác thực gói
  while (package != 'A' && package != 'B' && package != 'C') {
    cout << "Goi khong hop le. Vui long nhap lai: ";
    cin >> package;
  }

  // Nhập số phút
  int minutes;
  cout << "Nhap so phut su dung: ";
  cin >> minutes;

  // Tính phí
  double cost = 0;
  switch (package) {
  case 'A':
    if (minutes > 450) {
      cost = priceA + (minutes - 450) * rateA;
    } else {
      cost = priceA;
    }
    break;
  case 'B':
    if (minutes > 900) {
      cost = priceB + (minutes - 900) * rateB;
    } else {
      cost = priceB;
    }
    break;
  case 'C':
    cost = priceC;
    break;
  }

  // Hiển thị hóa đơn
  cout << "Hoa don hang thang cua ban $" << cost << endl;

  return 0;
}