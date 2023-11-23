#include <iostream>

using namespace std;

// Hàm hỏi người dùng số lượng nhân viên trong công ty
int getNumberOfEmployees() {
  int numberOfEmployees;

  cout << "Nhap so luong nhan vien trong cong ty: ";
  cin >> numberOfEmployees;

  // Xác thực đầu vào
  while (numberOfEmployees < 1) {
    cout << "So luong nhan vien phai lon hon 0. Vui long nhap lai: ";
    cin >> numberOfEmployees;
  }

  return numberOfEmployees;
}

// Hàm yêu cầu người dùng nhập số ngày mỗi nhân viên đã bỏ lỡ trong năm qua
int getTotalDaysAbsent(int numberOfEmployees) {
  int totalDaysAbsent = 0;

  for (int i = 0; i < numberOfEmployees; i++) {
    int numberOfDaysAbsent;

    cout << "Nhap so ngay nhan vien thu " << i + 1 << " da bo lo trong nam qua: ";
    cin >> numberOfDaysAbsent;

    // Xác thực đầu vào
    while (numberOfDaysAbsent < 0) {
      cout << "So ngay vang mat khong duoc am. Vui long nhap lai: ";
      cin >> numberOfDaysAbsent;
    }

    totalDaysAbsent += numberOfDaysAbsent;
  }

  return totalDaysAbsent;
}

// Hàm tính số ngày vắng mặt trung bình
double getAverageDaysAbsent(int numberOfEmployees, int totalDaysAbsent) {
  return (double)totalDaysAbsent / numberOfEmployees;
}

int main() {
  // Nhập số lượng nhân viên trong công ty
  int numberOfEmployees = getNumberOfEmployees();

  // Nhập tổng số ngày vắng mặt của tất cả nhân viên trong năm
  int totalDaysAbsent = getTotalDaysAbsent(numberOfEmployees);

  // Tính số ngày vắng mặt trung bình
  double averageDaysAbsent = getAverageDaysAbsent(numberOfEmployees, totalDaysAbsent);

  // In số ngày vắng mặt trung bình
  cout << "So ngay vang mat trung binh la: " << averageDaysAbsent << endl;

  return 0;
}
