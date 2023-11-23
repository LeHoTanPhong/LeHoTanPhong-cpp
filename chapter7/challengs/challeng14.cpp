#include <iostream>
#include <random>

using namespace std;

int main() {
  // Khởi tạo mảng xổ số
  int lottery[5];
  for (int i = 0; i < 5; i++) {
    lottery[i] = rand() % 10;
  }

  // Nhập số của người dùng
  int user[5];
  for (int i = 0; i < 5; i++) {
    cout << "Nhap so thu " << i + 1 << ": ";
    cin >> user[i];
  }

  // Đếm số chữ số trùng khớp
  int matches = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (lottery[i] == user[j]) {
        matches++;
        break;
      }
    }
  }

  // Hiển thị kết quả
  cout << "So trung thuong la: ";
  for (int i = 0; i < 5; i++) {
    cout << lottery[i] << " ";
  }
  cout << endl;
  cout << "So cua ban la: ";
  for (int i = 0; i < 5; i++) {
    cout << user[i] << " ";
  }
  cout << endl;
  cout << "So chu khong trung khop la: " << matches << endl;

  // Kiểm tra xem người dùng có trúng giải lớn hay không
  if (matches == 5) {
    cout << "Chuc mung, ban da trung giai thuong lon!" << endl;
  }

  return 0;
}
