#include <iostream>
#include <math.h>

using namespace std;

// Hàm tính giá trị tương lai của một khoản đầu tư với lãi kép hàng tháng
double FutureValue(double presentValue, double monthlyInterestRate, int months) {
  // Khởi tạo biến để lưu giá trị tương lai
  double futureValue = presentValue;

  // Tính giá trị tương lai
  for (int i = 1; i <= months; i++) {
    futureValue *= (1 + monthlyInterestRate);
  }

  // Trả về giá trị tương lai
  return futureValue;
}

int main() {
  // Khởi tạo biến để lưu giá trị hiện tại, lãi suất hàng tháng và số tháng
  double presentValue;
  double monthlyInterestRate;
  int months;

  // Yêu cầu người dùng nhập giá trị hiện tại
  cout << "Nhap gia tri hien tai: ";
  cin >> presentValue;

  // Yêu cầu người dùng nhập lãi suất hàng tháng
  cout << "Nhap lai suat hang thang: ";
  cin >> monthlyInterestRate;

  // Yêu cầu người dùng nhập số tháng
  cout << "Nhap so thang: ";
  cin >> months;

  // Tính giá trị tương lai
  double futureValue = FutureValue(presentValue, monthlyInterestRate, months);

  // Hiển thị giá trị tương lai
  cout << "Gia tri tuong la: " << futureValue << endl;

  return 0;
}
