#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Mở tệp
  ifstream infile("text.txt");

  // Khởi tạo các biến đếm
  int uppercase_count = 0;
  int lowercase_count = 0;
  int digit_count = 0;

  // Lặp qua từng ký tự trong tệp
  char c;
  while (infile >> c) {
    // Nếu ký tự là chữ hoa
    if (isupper(c)) {
      uppercase_count++;
    }
    // Nếu ký tự là chữ thường
    else if (islower(c)) {
      lowercase_count++;
    }
    // Nếu ký tự là chữ số
    else if (isdigit(c)) {
      digit_count++;
    }
  }

  // Đóng tệp
  infile.close();

  // In kết quả
  cout << "So chu in hoa: " << uppercase_count << endl;
  cout << "So chu thuong: " << lowercase_count << endl;
  cout << "So chu so: " << digit_count << endl;

  return 0;
}
