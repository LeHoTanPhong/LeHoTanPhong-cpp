#include <iostream>

using namespace std;

int main() {
  // Khởi tạo bảng điểm đóng băng và điểm sôi
  double freezing_points[] = {-173, -38, -362, 32};
  double boiling_points[] = {172, 676, -306, 212};

  // Nhập nhiệt độ
  double temperature;
  cout << "Nhap nhiet do: ";
  cin >> temperature;

  // Kiểm tra các chất sẽ đóng băng
  for (int i = 0; i < 4; i++) {
    if (freezing_points[i] <= temperature) {
      cout << "chat " << (i == 0 ? "ruou etylic" : (i == 1 ? "Thuy ngan" : (i == 2 ? "oxy" : "nuoc"))) << " se dong bang o nhiet do nay." << endl;
    }
  }

  // Kiểm tra các chất sẽ sôi
  for (int i = 0; i < 4; i++) {
    if (boiling_points[i] >= temperature) {
      cout << "Chat " << (i == 0 ? "ruou etylic" : (i == 1 ? "Thuy ngan" : (i == 2 ? "oxy" : "nuoc"))) << " se soi o nhiet do nay." << endl;
    }
  }

  return 0;
}