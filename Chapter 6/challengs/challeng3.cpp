#include <iostream>

using namespace std;

// Hàm yêu cầu người dùng nhập doanh số bán hàng hàng quý của một bộ phận và trả về giá trị đó dưới dạng gấp đôi.
double getSales(string department) {
  double sales;

  // Yêu cầu người dùng nhập doanh số bán hàng
  cout << "Nhap doanh so ban hang quy cua bo phan: " << department << ": ";
  cin >> sales;

  // Xác thực đầu vào
  while (sales < 0.0) {
    cout << "Doanh so ban hang khong duoc am. Vui long nhap lai:: ";
    cin >> sales;
  }

  return sales;
}

// Hàm xác định bộ phận có doanh số bán hàng cao nhất trong số bốn bộ phận được cung cấp.
void findHighest(double salesNortheast, double salesSoutheast, double salesNorthwest, double salesSouthwest) {
  // Khởi tạo biến để lưu trữ bộ phận có doanh số bán hàng cao nhất và doanh số bán hàng của bộ phận đó.
  string highestDepartment = "";
  double highestSales = 0.0;

  // So sánh doanh số bán hàng của từng bộ phận với nhau để tìm bộ phận có doanh số bán hàng cao nhất.
  if (salesNortheast > highestSales) {
    highestSales = salesNortheast;
    highestDepartment = "Đong bac";
  }

  if (salesSoutheast > highestSales) {
    highestSales = salesSoutheast;
    highestDepartment = "Đong Nam";
  }

  if (salesNorthwest > highestSales) {
    highestSales = salesNorthwest;
    highestDepartment = "Tay Bac";
  }

  if (salesSouthwest > highestSales) {
    highestSales = salesSouthwest;
    highestDepartment = "Tay Nam";
  }

  // In tên của bộ phận có doanh số bán hàng cao nhất cùng với doanh số bán hàng của bộ phận đó.
  cout << "Bo phan co doanh so cao nhat quy la: " << highestDepartment << " voi doanh so ban hang la: " << highestSales << endl;
}

int main() {
  // Nhập doanh số bán hàng của từng bộ phận.
  double salesNortheast = getSales("Đong Bac");
  double salesSoutheast = getSales("Đong Nam");
  double salesNorthwest = getSales("Tay Bac");
  double salesSouthwest = getSales("Tay Nam");

  // Tìm bộ phận có doanh số bán hàng cao nhất.
  findHighest(salesNortheast, salesSoutheast, salesNorthwest, salesSouthwest);

  return 0;
}
