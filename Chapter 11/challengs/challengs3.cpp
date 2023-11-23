#include <iostream>

using namespace std;

// Khai báo cấu trúc dữ liệu bán hàng
struct DoanhThu
{
  string tenPhanKhu;
  float doanhThuQuy1;
  float doanhThuQuy2;
  float doanhThuQuy3;
  float doanhThuQuy4;
  float doanhThuNam;
  float doanhThuTrungBinh;
};

// Hàm nhập dữ liệu bán hàng
void nhapDoanhThu(DoanhThu &doanhThu)
{
  cout << "Nhap ten phan khu: ";
  getline(cin, doanhThu.tenPhanKhu);

  cout << "Nhap doanh thu quy 1: ";
  cin >> doanhThu.doanhThuQuy1;
  while (doanhThu.doanhThuQuy1 < 0)
  {
    cout << "Doanh thu quy 1 khong duoc am. Vui long nhap lai: ";
    cin >> doanhThu.doanhThuQuy1;
  }

  cout << "Nhap doanh thu quy 2: ";
  cin >> doanhThu.doanhThuQuy2;
  while (doanhThu.doanhThuQuy2 < 0)
  {
    cout << "Doanh thu quy 2 khong duoc am. Vui long nhap lai: ";
    cin >> doanhThu.doanhThuQuy2;
  }

  cout << "Nhap doanh thu quy 3: ";
  cin >> doanhThu.doanhThuQuy3;
  while (doanhThu.doanhThuQuy3 < 0)
  {
    cout << "Doanh thu quy 3 khong duoc âm. Vui long nhap lai: ";
    cin >> doanhThu.doanhThuQuy3;
  }

  cout << "Nhap doanh thu quy 4: ";
  cin >> doanhThu.doanhThuQuy4;
  while (doanhThu.doanhThuQuy4 < 0)
  {
    cout << "Doanh thu quy 4 khong duoc am. Vui long nhap lai: ";
    cin >> doanhThu.doanhThuQuy4;
  }

  doanhThu.doanhThuNam = doanhThu.doanhThuQuy1 + doanhThu.doanhThuQuy2 +
                          doanhThu.doanhThuQuy3 + doanhThu.doanhThuQuy4;
  doanhThu.doanhThuTrungBinh = doanhThu.doanhThuNam / 4;
}

// Hàm hiển thị dữ liệu bán hàng
void xuatDoanhThu(DoanhThu doanhThu)
{
  cout << "Ten phan khu: " << doanhThu.tenPhanKhu << endl;
  cout << "Doanh thu quy 1: " << doanhThu.doanhThuQuy1 << endl;
  cout << "Doanh thu quy 2: " << doanhThu.doanhThuQuy2 << endl;
  cout << "Doanh thu quy 3: " << doanhThu.doanhThuQuy3 << endl;
  cout << "Doanh thu quy 4: " << doanhThu.doanhThuQuy4 << endl;
  cout << "Doanh thu nam: " << doanhThu.doanhThuNam << endl;
  cout << "Doanh thu trung binh hang quy: " << doanhThu.doanhThuTrungBinh << endl;
}

int main()
{
  // Khởi tạo biến cấu trúc
  DoanhThu doanhThuDong, doanhThuTay, doanhThuBac, doanhThuNam;

  // Nhập dữ liệu bán hàng
  nhapDoanhThu(doanhThuDong);
  nhapDoanhThu(doanhThuTay);
  nhapDoanhThu(doanhThuBac);
  nhapDoanhThu(doanhThuNam);

  // Hiển thị dữ liệu bán hàng
  xuatDoanhThu(doanhThuDong);
  xuatDoanhThu(doanhThuTay);
  xuatDoanhThu(doanhThuBac);
  xuatDoanhThu(doanhThuNam);

  return 0;
}
