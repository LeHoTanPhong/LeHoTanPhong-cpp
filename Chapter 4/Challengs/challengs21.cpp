#include <iostream>

using namespace std;

int main() 
{
  // Hiển thị menu
  cout << "Chon chat khi:" << endl;
  cout << "1. Carbon dioxide" << endl;
  cout << "2. Khong khi" << endl;
  cout << "3. khi Heli" << endl;
  cout << "4. Hydro" << endl;
  int luaChon;
  cout << "Nhap lua chon cua ban: ";
  cin >> luaChon;

  // Xác thực đầu vào
  while (luaChon < 1 || luaChon > 4) {
    cout << "Lua chon khong hop le. Vui long chon lai: ";
    cin >> luaChon;
  }

  // Nhập thời gian
  double thoiGian;
  cout << "Nhap thoi gian: ";
  cin >> thoiGian;

  // Xác thực đầu vào
  while (thoiGian < 0 || thoiGian > 30) {
    cout << "Thoi gian khong hop le. Vui long chon lai: ";
    cin >> thoiGian;
  }

  // Tính khoảng cách
  double khoangCach;
  switch (luaChon) {
    case 1:
      khoangCach = thoiGian * 258.0;
      break;
    case 2:
      khoangCach = thoiGian * 331.5;
      break;
    case 3:
      khoangCach = thoiGian * 972.0;
      break;
    case 4:
      khoangCach = thoiGian * 1270.0;
      break;
  }

  // Hiển thị kết quả
  cout << "Khoang cach la " << khoangCach << " m" << endl;

  return 0;
}