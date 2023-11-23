#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // Khởi tạo tỷ lệ phí
  const double rate1 = 0.05;
  const double rate2 = 0.45;
  const double rate3 = 0.20;

  // Nhập thời gian bắt đầu
  double start_time;
  cout << "Nhap thoi gian bat dau (HH.MM): ";
  cin >> start_time;

  // Xác thực thời gian bắt đầu
  while (start_time > 23.59 || (start_time - static_cast<int>(start_time)) > 59) {
    cout << "Thoi gian bat dau lhong hop le. Vui long nhap lai: ";
    cin >> start_time;
  }

  // Nhập số phút
  int minutes;
  cout << "Nhap so phut ";
  cin >> minutes;

  // Tính phí
  double cost = 0;
  int hour = static_cast<int>(start_time);
  double minute = start_time - static_cast<int>(start_time);

  // Xác định tỷ lệ phí
  switch (hour) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    cost += minutes * rate1;
    break;
  case 7:
  case 8:
  case 9:
  case 10:
  case 11:
  case 12:
    cost += minutes * rate2;
    break;
  default:
    cost += minutes * rate3;
    break;
  }

  // Hiển thị phí
  cout << "Phi: " << cost << endl;

  return 0;
}
