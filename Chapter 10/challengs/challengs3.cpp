#include <iostream>

using namespace std;

// Hàm đếm số từ trong một chuỗi C
int countWords(const char *string) {
  // Khởi tạo biến đếm
  int count = 0;

  // Duyệt qua chuỗi
  for (const char *p = string; *p != '\0'; p++) {
    // Nếu ký tự hiện tại là khoảng trắng, thì đó là sự kết thúc của một từ
    if (*p == ' ') {
      count++;
    }
  }

  // Trả về số từ
  return count + 1; // Thêm một cho từ cuối cùng
}

// Hàm đếm số từ trong một đối tượng lớp chuỗi
int countWords(const string &string) {
  // Khởi tạo biến đếm
  int count = 0;

  // Duyệt qua chuỗi
  for (size_t i = 0; i < string.size(); i++) {
    // Nếu ký tự hiện tại là khoảng trắng, thì đó là sự kết thúc của một từ
    if (string[i] == ' ') {
      count++;
    }
  }

  // Trả về số từ
  return count + 1; // Thêm một cho từ cuối cùng
}

int main() {
  // Yêu cầu người dùng nhập một chuỗi
  cout << "Hay nhap mot chuoi: ";
  string input;
  getline(cin, input);

  // Gọi hàm đếm số từ
  int count = countWords(input);

  // Hiển thị kết quả
  cout << "So tu trong chuoi la: " << count << endl;

  return 0;
}
