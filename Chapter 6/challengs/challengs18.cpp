#include <iostream>

using namespace std;

int main() {

  // Khai báo biến
  int soPhong;
  double giaSonMoiGallon;
  double dienTichTuongMoiPhong;
  int soGallonCanThiet;
  int soGioLaoDongCanThiet;
  double chiPhiSon;
  double chiPhiLaoDong;
  double tongChiPhi;

  // Xác thực đầu vào
  do {
    cout << "Nhap so phong can son: ";
    cin >> soPhong;
    if (soPhong < 1) {
      cout << "Số phòng cần lớn hơn hoặc bằng 1. Vui lòng nhập lại.\n";
    }
  } while (soPhong < 1);

  do {
    cout << "Nhap gia son moi gallon: ";
    cin >> giaSonMoiGallon;
    if (giaSonMoiGallon < 10) {
      cout << "Gia son lon hon haoc bang $10. Vui long nhap lai.\n";
    }
  } while (giaSonMoiGallon < 10);

  do {
    cout << "Nhap dien tich tuong trong moi phong (feet vuong): ";
    cin >> dienTichTuongMoiPhong;
    if (dienTichTuongMoiPhong < 0) {
      cout << "Dien tich tuong khong duoc am. Vui long nhap lai.\n";
    }
  } while (dienTichTuongMoiPhong < 0);

  // Tính toán
  soGallonCanThiet = dienTichTuongMoiPhong / 110;
  soGioLaoDongCanThiet = soGallonCanThiet * 8;
  chiPhiSon = soGallonCanThiet * giaSonMoiGallon;
  chiPhiLaoDong = soGioLaoDongCanThiet * 25;
  tongChiPhi = chiPhiSon + chiPhiLaoDong;

  // Hiển thị kết quả
  cout << "\nKet qua uoc tinh cong viec son:\n\n";
  cout << "So phong son: " << soPhong << endl;
  cout << "Gia son moi gallon: $" << giaSonMoiGallon << endl;
  cout << "Dien tich tuong trong moi phong: " << dienTichTuongMoiPhong << " feet vuông" << endl;
  cout << "So gallon can thiet: " << soGallonCanThiet << endl;
  cout << "So gio lao dong can thiet: " << soGioLaoDongCanThiet << endl;
  cout << "Chi phi son: $" << chiPhiSon << endl;
  cout << "Chi phi lao dong: $" << chiPhiLaoDong << endl;
  cout << "Tong chi phi: $" << tongChiPhi << endl;

  return 0;
}
