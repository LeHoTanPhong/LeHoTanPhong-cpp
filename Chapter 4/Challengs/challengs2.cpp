#include <iostream>
#include <string>

using namespace std;

int main() {
  // Yêu cầu người dùng nhập một số
  int number;
  cout << "Nhap so tu 1 den 10: ";
  cin >> number;

  // Xác thực đầu vào
  while (number < 1 || number > 10) {
    cout << "So khong hop le. Nhap lai: ";
    cin >> number;
  }

  // Chuyển đổi số thập phân sang số La Mã
  string romanNumber;
  switch (number) {
    case 1:
      romanNumber = "I";
      break;
    case 2:
      romanNumber = "II";
      break;
    case 3:
      romanNumber = "III";
      break;
    case 4:
      romanNumber = "IV";
      break;
    case 5:
      romanNumber = "V";
      break;
    case 6:
      romanNumber = "VI";
      break;
    case 7:
      romanNumber = "VII";
      break;
    case 8:
      romanNumber = "VIII";
      break;
    case 9:
      romanNumber = "IX";
      break;
    case 10:
      romanNumber = "X";
      break;
    default:
      cout << "So khong hop le." << endl;
      return 1;
  }

  // Hiển thị số La Mã
  cout << "So La Ma tuong ung la: " << romanNumber << endl;

  return 0;
}