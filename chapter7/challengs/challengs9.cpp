#include <iostream>

using namespace std;

// Mảng chứa mã số nhận dạng nhân viên
long long empId[7] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};

// Mảng chứa số giờ làm việc của mỗi nhân viên
int hours[7];

// Mảng chứa mức lương theo giờ của mỗi nhân viên
double payRate[7];

// Mảng chứa tổng tiền lương của mỗi nhân viên
double wages[7];

int main() {
  // Lặp qua tất cả nhân viên
  for (int i = 0; i < 7; i++) {
    // Hiển thị mã số nhận dạng của nhân viên
    cout << "Ma so nhan dang nhan vien: " << empId[i] << endl;

    // Yêu cầu người dùng nhập số giờ làm việc
    cout << "Nhap so gio lam viec: ";
    cin >> hours[i];

    // Xác thực đầu vào
    while (hours[i] < 0) {
      cout << "So gio khong duoc am. Vui long nhap lai: ";
      cin >> hours[i];
    }

    // Yêu cầu người dùng nhập mức lương
    cout << "Nhap muc luong: ";
    cin >> payRate[i];

    // Xác thực đầu vào
    while (payRate[i] < 15.0) {
      cout << "Muc luong khong duoc nho 15.0. Vui long nhap lai: ";
      cin >> payRate[i];
    }

    // Tính tổng tiền lương
    wages[i] = hours[i] * payRate[i];
  }

  // Hiển thị bảng lương
  cout << "Bang luong" << endl;
  cout << "Ma so nhan dang | So gio | Muc luong | Tong tien luong" << endl;
  for (int i = 0; i < 7; i++) {
    cout << empId[i] << " | " << hours[i] << " | " << payRate[i] << " | " << wages[i] << endl;
  }

  return 0;
}
