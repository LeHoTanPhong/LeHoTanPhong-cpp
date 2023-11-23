#include <iostream>
#include <math.h>

using namespace std;

// Hàm tính giá trị hiện tại của một khoản đầu tư
double PresentValue(double futureValue, double interestRate, int years) {
  // Khởi tạo biến để lưu giá trị hiện tại
  double presentValue;

  // Tính giá trị hiện tại
  presentValue = futureValue / pow(1 + interestRate, years);

  // Trả về giá trị hiện tại
  return presentValue;
}

int main() {
  // Khởi tạo biến để lưu giá trị tương lai, lãi suất hàng năm và số năm
  double futureValue;
  double interestRate;
  int years;

  // Yêu cầu người dùng nhập giá trị tương lai
  cout << "Nhap gia tri tuong lai: ";
  cin >> futureValue;

  // Yêu cầu người dùng nhập lãi suất hàng năm
  cout << "Nhap lai suat hang nam: ";
  cin >> interestRate;

  // Yêu cầu người dùng nhập số năm
  cout << "Nhap so nam: ";
  cin >> years;

  // Tính giá trị hiện tại
  double presentValue = PresentValue(futureValue, interestRate, years);

  // Hiển thị giá trị hiện tại
  cout << "Gia tri hien tai la: " << presentValue << endl;

  return 0;
}
