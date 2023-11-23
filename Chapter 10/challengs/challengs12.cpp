#include <iostream>
#include <string>

using namespace std;

bool is_valid_password(const string &password) {
  // Kiểm tra độ dài của mật khẩu
  if (password.length() < 6) {
    return false;
  }

  // Kiểm tra các ký tự chữ hoa
  int uppercase_count = 0;
  for (char c : password) {
    if (isupper(c)) {
      uppercase_count++;
    }
  }
  if (uppercase_count < 1) {
    return false;
  }

  // Kiểm tra các ký tự chữ thường
  int lowercase_count = 0;
  for (char c : password) {
    if (islower(c)) {
      lowercase_count++;
    }
  }
  if (lowercase_count < 1) {
    return false;
  }

  // Kiểm tra các chữ số
  int digit_count = 0;
  for (char c : password) {
    if (isdigit(c)) {
      digit_count++;
    }
  }
  if (digit_count < 1) {
    return false;
  }

  // Mật khẩu hợp lệ
  return true;
}

int main() {
  // Yêu cầu nhập mật khẩu
  string password;
  cout << "Nhap mat khau: ";
  cin >> password;

  // Xác minh mật khẩu
  if (is_valid_password(password)) {
    // Mật khẩu hợp lệ
    cout << "Mat khau khong hop le." << endl;
  } else {
    // Mật khẩu không hợp lệ
    cout << "Mat khau khong hop le. Mat khau phai dap ung cac tieu chi sau:" << endl;
    cout << "• Mat khau phai dai it nhat sau ky tu." << endl;
    cout << "• Mat khau phai co it nhat mot chu hoa va it nhat mot chu thuong." << endl;
    cout << "• Mat khau phai co it nhat mot chu so." << endl;
  }

  return 0;
}
