#include <iostream>
#include <random>

using namespace std;

int main() {
  // Tạo số ngẫu nhiên
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dis(1, 999);

  // Hiển thị hai số ngẫu nhiên
  int so1 = dis(gen);
  int so2 = dis(gen);
  cout << so1 << endl;
  cout << so2 << endl;

  // Nhập câu trả lời của học sinh
  int ketQua;
  cin >> ketQua;

  // Kiểm tra câu trả lời
  if (ketQua == so1 + so2) {
    cout << "Chuc mung ban da tra loi dung!" << endl;
  } else {
    cout << "Cau tra loi dung la: " << so1 + so2 << endl;
  }

  return 0;
}