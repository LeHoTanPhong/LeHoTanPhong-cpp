#include <iostream>

using namespace std;

int main() {
  // Nhập tên hai màu cơ bản
  string color1, color2;
  cout << "Nhap ten mau thu nhat: ";
  cin >> color1;
  cout << "Nhap ten mau thu hai: ";
  cin >> color2;

  // Kiểm tra tính hợp lệ của đầu vào
  if (color1 != "do" && color1 != "xanh" && color1 != "vang") {
    cout << "Mau khong hop le." << endl;
    return 1;
  }
  if (color2 != "do" && color2 != "xanh" && color2 != "vang") {
    cout << "Mau khong hop le." << endl;
    return 1;
  }

  // Xác định màu thứ cấp
  string colorResult;
  if (color1 == "do" && color2 == "xanh") {
    colorResult = "tim";
  } else if (color1 == "do" && color2 == "vang") {
    colorResult = "cam";
  } else if (color2 == "do" && color1 == "vang") {
    colorResult = "cam";
  } else if (color1 == "xanh" && color2 == "vang") {
    colorResult = "xanh la cay";
  }

  // Hiển thị kết quả
  cout << "Mau la: " << colorResult << endl;

  return 0;
}
