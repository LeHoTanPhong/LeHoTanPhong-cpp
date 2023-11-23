#include <iostream>

using namespace std;

float tinh_loi_nhuan(int so_luong, float gia_mua, float hoa_hong_mua, float gia_ban, float hoa_hong_ban) {
  
  float chi_phi_mua = so_luong * gia_mua + hoa_hong_mua;
  float doanh_thu = so_luong * gia_ban - hoa_hong_ban;
  return doanh_thu - chi_phi_mua;
}

int main() {
  // Nhập dữ liệu
  int so_luong;
  float gia_mua, hoa_hong_mua, gia_ban, hoa_hong_ban;
  cout << "Nhap so co phieu: ";
  cin >> so_luong;
  cout << "Nha[ gia mua co phieu: ";
  cin >> gia_mua;
  cout << "Nhap tien hoa hong de tra: ";
  cin >> hoa_hong_mua;
  cout << "Nhap gia ban moi co phieu: ";
  cin >> gia_ban;
  cout << "Nhap tien hoa hong ban de tra: ";
  cin >> hoa_hong_ban;

  // Tính lợi nhuận
  float loi_nhuan = tinh_loi_nhuan(so_luong, gia_mua, hoa_hong_mua, gia_ban, hoa_hong_ban);

  // Hiển thị kết quả
  if (loi_nhuan > 0) {
    cout << "Loi nhuan: " << loi_nhuan << endl;
  } else {
    cout << "Lo: " << loi_nhuan << endl;
  }

  return 0;
}
