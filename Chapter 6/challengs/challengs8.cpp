#include <iostream>
#include <random>

using namespace std;

// Hàm mô phỏng việc tung đồng xu
void CoinToss() {
  // Khởi tạo hàm tạo số ngẫu nhiên
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dis(1, 2);

  // Tạo số ngẫu nhiên
  int result = dis(gen);

  // Hiển thị kết quả
  if (result == 1) {
    cout << "Dau." << endl;
  } else {
    cout << "Duoi." << endl;
  }
}

int main() {
  // Yêu cầu người dùng nhập số lần tung đồng xu
  int numTosses;
  cout << "Nhap so lan tung dong xu: ";
  cin >> numTosses;

  // Mô phỏng việc tung đồng xu
  for (int i = 0; i < numTosses; i++) {
    CoinToss();
  }

  return 0;
}
