#include <iostream>

using namespace std;

// Hàm tính tổng chi phí cho bệnh nhân nội trú
float chi_phi_noi_tru(int so_ngay, float ty_gia_hang_ngay, float tien_thuoc, float phi_dich_vu) {
  if (so_ngay < 0) {
    cout << "So ngay nam vien khong hop le." << endl;
    return -1;
  }
  if (ty_gia_hang_ngay < 0) {
    cout << "Ty gia hang ngay khong hop le." << endl;
    return -1;
  }
  if (tien_thuoc < 0) {
    cout << "Tien thuoc khong hop le." << endl;
    return -1;
  }
  if (phi_dich_vu < 0) {
    cout << "Phi dich vu khong hop le." << endl;
    return -1;
  }

  return so_ngay * ty_gia_hang_ngay + tien_thuoc + phi_dich_vu;
}

// Hàm tính tổng chi phí cho bệnh nhân ngoại trú
float chi_phi_ngoai_tru(float phi_dich_vu, float tien_thuoc) {
  if (phi_dich_vu < 0) {
    cout << "Phi dich vu khong hop ke." << endl;
    return -1;
  }
  if (tien_thuoc < 0) {
    cout << "Tien thuoc khong hop le." << endl;
    return -1;
  }

  return phi_dich_vu + tien_thuoc;
}

int main() {
  // Hỏi bệnh nhân là bệnh nhân nội trú hay ngoại trú
  char loai_benh_nhan;
  cout << "Benh nhan la benh nhan noi tru (I) hay ngoai tru (O)? ";
  cin >> loai_benh_nhan;

  // Nhập dữ liệu cho bệnh nhân
  float chi_phi = 0;
  if (loai_benh_nhan == 'I') {
    int so_ngay;
    float ty_gia_hang_ngay, tien_thuoc, phi_dich_vu;
    cout << "Nhap so ngay nam vien: ";
    cin >> so_ngay;
    cout << "Nhap ty gia hang ngay: ";
    cin >> ty_gia_hang_ngay;
    cout << "Nhap tien thuoc: ";
    cin >> tien_thuoc;
    cout << "Nhap phi dich vu: ";
    cin >> phi_dich_vu;

    chi_phi = chi_phi_noi_tru(so_ngay, ty_gia_hang_ngay, tien_thuoc, phi_dich_vu);
  } else if (loai_benh_nhan == 'O') {
    float phi_dich_vu, tien_thuoc;
    cout << "Nhap phi dich vu: ";
    cin >> phi_dich_vu;
    cout << "Nhap tien thuoc: ";
    cin >> tien_thuoc;

    chi_phi = chi_phi_ngoai_tru(phi_dich_vu, tien_thuoc);
  } else {
    cout << "Loai benh khong hop le." << endl;
    return 0;
  }

  // Hiển thị chi phí
  cout << "Chi phi nam vien la: " << chi_phi << endl;

  return 0;
}
