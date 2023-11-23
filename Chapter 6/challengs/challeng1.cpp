#include <iostream>

using namespace std;

// Hàm tính giá bán lẻ của một mặt hàng
double CalculateRetail(double wholesaleCost, double markupPercentage) {
  // Xác thực đầu vào
  if (wholesaleCost < 0) 
  {
    cout << "Gia ban khong duoc am" << endl;
    return -1;
  }

  if (markupPercentage < 0) {
    cout << "Ty le phan tram khong duoc am." << endl;
    return -1;
  }

  // Tính giá bán lẻ
  double markupAmount = markupPercentage / 100 * wholesaleCost;
  double retailCost = wholesaleCost + markupAmount;

  return retailCost;
}

int main() {
  // Nhập giá bán buôn và tỷ lệ phần trăm đánh dấu
  double wholesaleCost;
  double markupPercentage;
  cout << "Nhap gia ban buon: ";
  cin >> wholesaleCost;
  cout << "Nhap ty le phan tram danh dau: ";
  cin >> markupPercentage;

  // Tính giá bán lẻ
  double retailCost = CalculateRetail(wholesaleCost, markupPercentage);

  // Hiển thị giá bán lẻ
  cout << "Gia ban le la: " << retailCost << endl;

  return 0;
}
