#include <iostream>

using namespace std;

// Hàm tính quy mô dân số trong một năm
int tinh_quy_mo_dan_so(int quy_mo_truoc_day, float ty_le_sinh, float ty_le_tu_vong, int so_luot_den, int so_luot_khoi_hanh) {
  if (quy_mo_truoc_day < 2) {
    cout << "Kich thuoc ban dau phai lon hon 2." << endl;
    return -1;
  }
  if (ty_le_sinh < 0) {
    cout << "Ty le sinh khong hop le." << endl;
    return -1;
  }
  if (ty_le_tu_vong < 0) {
    cout << "Ty le tu vong khong hop le." << endl;
    return -1;
  }
  if (so_luot_den < 0) {
    cout << "So luot den khong hop le." << endl;
    return -1;
  }
  if (so_luot_khoi_hanh < 0) {
    cout << "So luot khoi hanh khong hop le." << endl;
    return -1;
  }

  return quy_mo_truoc_day + quy_mo_truoc_day * ty_le_sinh - quy_mo_truoc_day * ty_le_tu_vong + so_luot_den - so_luot_khoi_hanh;
}

int main() {
  // Nhập dữ liệu
  int quy_mo_bat_dau;
  float ty_le_sinh, ty_le_tu_vong;
  int so_luot_den, so_luot_khoi_hanh;
  int so_nam;

  cout << "Nhap kich thuoc bat dau cua dan so: ";
  cin >> quy_mo_bat_dau;
  cout << "Nhap ty le sinh hang nam: ";
  cin >> ty_le_sinh;
  cout << "Nhap ty le tu vong hang nam: ";
  cin >> ty_le_tu_vong;
  cout << "Nhap so luot den hang nam: ";
  cin >> so_luot_den;
  cout << "Nhap so luot khoi hanh hang nam: ";
  cin >> so_luot_khoi_hanh;
  cout << "Nhap so nam hien thi: ";
  cin >> so_nam;

  // Xác thực đầu vào
  if (quy_mo_bat_dau < 2) {
    cout << "Kich thuoc ban dau phai lon hon 2." << endl;
    return 0;
  }
  if (ty_le_sinh < 0) {
    cout << "Ty le sinh khong hop le." << endl;
    return 0;
  }
  if (ty_le_tu_vong < 0) {
    cout << "Ty le tu vong khong hop le." << endl;
    return 0;
  }
  if (so_luot_den < 0) {
    cout << "So luot den khong hop le." << endl;
    return 0;
  }
  if (so_luot_khoi_hanh < 0) {
    cout << "So luot khoi hanh khong hop le." << endl;
    return 0;
  }
  if (so_nam < 1) {
    cout << "So nam phai lon hon 1." << endl;
    return 0;
  }

  // Tính quy mô dân số
  int quy_mo = quy_mo_bat_dau;
  for (int i = 0; i < so_nam; i++) {
    quy_mo = tinh_quy_mo_dan_so(quy_mo, ty_le_sinh, ty_le_tu_vong, so_luot_den, so_luot_khoi_hanh);
  }

  // Hiển thị kết quả
  cout << "Quy mo dan so sau " << so_nam << " nam la: " << quy_mo << endl;

  return 0;
}
