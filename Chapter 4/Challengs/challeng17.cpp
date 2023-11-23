#include <iostream>

using namespace std;

int main() {
  // Hỏi tên vận động viên
  string ten;
  cout << "Nhap ten van dong vien: ";
  cin >> ten;

  // Hỏi ngày tháng và chiều cao của ba thành tích tốt nhất
  struct KetQua {
    string ngayThang;
    double chieuCao;
  };
  KetQua ketQua[3];
  for (int i = 0; i < 3; i++) {
    cout << "Nhap ngay thang cua thanh tich thu " << i + 1 << ": ";
    cin >> ketQua[i].ngayThang;
    cout << "Nhap chieu cao cua thanh tich thu" << i + 1 << " (tinh bang met): ";
    cin >> ketQua[i].chieuCao;
  }

  // Xác thực đầu vào
  for (int i = 0; i < 3; i++) {
    if (ketQua[i].chieuCao < 2.0 || ketQua[i].chieuCao > 5.0) {
      cout << "Chieu cao khong hop le. Vui long nhap lai: ";
      cin >> ketQua[i].chieuCao;
    }
  }

  // So sánh chiều cao
  for (int i = 0; i < 2; i++) {
    for (int j = i + 1; j < 3; j++) {
      if (ketQua[i].chieuCao < ketQua[j].chieuCao) {
        KetQua tam = ketQua[i];
        ketQua[i] = ketQua[j];
        ketQua[j] = tam;
      }
    }
  }

  // Hiển thị kết quả
  cout << "Ket qua cua " << ten << ": " << endl;
  for (int i = 0; i < 3; i++) {
    cout << "Thanh tich thu " << i + 1 << ": " << ketQua[i].ngayThang << ", " << ketQua[i].chieuCao << " met" << endl;
  }

  return 0;
}