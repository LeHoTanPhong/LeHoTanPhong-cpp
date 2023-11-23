#include <iostream>

using namespace std;

// Hàm yêu cầu dữ liệu từ người dùng
void inputData(int& quantityOrdered, int& quantityInStock, bool& hasSpecialShipping) {
  // Yêu cầu số lượng cuộn đặt hàng
  do {
    cout << "Nhap so luong dat hang: ";
    cin >> quantityOrdered;

    // Xác thực đầu vào
    if (quantityOrdered < 1) {
      cout << "So luong cuon phai lon hon 0. Vui long nhap lai." << endl;
    }
  } while (quantityOrdered < 1);

  // Yêu cầu số lượng cuộn trong kho
  do {
    cout << "Nhap so luong cuon trong kho: ";
    cin >> quantityInStock;

    // Xác thực đầu vào
    if (quantityInStock < 0) {
      cout << "So luong cuon trong kho phai lon hon 0. Vui long nhap lai." << endl;
    }
  } while (quantityInStock < 0);

  // Yêu cầu phí vận chuyển và xử lý đặc biệt
  cout << "Co phi van chuyen va xu ly dac biet khong (Y/N): ";
  char answer;
  cin >> answer;

  // Chuyển đổi đầu vào thành bool
  hasSpecialShipping = (answer == 'Y');

  // Nếu có phí vận chuyển và xử lý đặc biệt, yêu cầu nhập phí
  if (hasSpecialShipping) {
    cout << "Nhap phi van chuyen va xu ly dac biet: ";
    int specialShipping;
    cin >> specialShipping;

    // Xác thực đầu vào
    if (specialShipping < 0) {
      cout << "Phi van chuyen va xu ly dac biet phai lon hon 0, Vui long nhap lai." << endl;
      hasSpecialShipping = false;
    }
  }
}

// Hàm tính toán trạng thái đơn hàng
void calculateOrderStatus(int quantityOrdered, int quantityInStock, bool hasSpecialShipping,
                         int& quantityReadyToShip, int& quantityBackordered,
                         int& totalPrice, int& totalShippingAndHandling, int& totalOrder) {
  // Tính toán số lượng cuộn sẵn sàng xuất xưởng
  quantityReadyToShip = min(quantityOrdered, quantityInStock);

  // Tính toán số lượng cuộn được đặt hàng trước
  quantityBackordered = quantityOrdered - quantityReadyToShip;

  // Tính toán tổng giá trị của các phần hàng đã sẵn sàng để vận chuyển
  totalPrice = quantityReadyToShip * 100;

  // Tính toán tổng phí vận chuyển và xử lý trên các phần hàng đã sẵn sàng để vận chuyển
  if (hasSpecialShipping) {
    totalShippingAndHandling = quantityReadyToShip * (10 + specialShipping);
  } else {
    totalShippingAndHandling = quantityReadyToShip * 10;
  }

  // Tính toán tổng giá trị đơn hàng
  totalOrder = totalPrice + totalShippingAndHandling;
}

// Hàm hiển thị trạng thái đơn hàng
void displayOrderStatus(int quantityReadyToShip, int quantityBackordered,
                        int totalPrice, int totalShippingAndHandling, int totalOrder) {
  // Hiển thị số lượng cuộn sẵn sàng xuất xưởng
  cout << "So luong cuon san sang trong xuong la: "
