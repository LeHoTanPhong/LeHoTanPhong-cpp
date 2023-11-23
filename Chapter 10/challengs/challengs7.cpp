#include <iostream>
#include <cstring>
using namespace std;

int main() {
  // Mảng để lưu trữ họ, tên đệm và họ của người dùng
  char last_name[100], middle_name[100], first_name[100];

  // Yêu cầu người dùng nhập họ
  cout << "Nhap ho: ";
  cin.getline(last_name, 100);

  // Yêu cầu người dùng nhập tên đệm
  cout << "Nhap ten dem: ";
  cin.getline(middle_name, 100);

  // Yêu cầu người dùng nhập tên
  cout << "Nhap ten: ";
  cin.getline(first_name, 100);

  // Tạo mảng thứ tư để lưu trữ tên được sắp xếp
  char full_name[100];

  // Gán họ vào mảng thứ tư
  strcpy(full_name, last_name);

  // Thêm dấu phẩy và dấu cách
  strcat(full_name, ", ");

  // Gán tên đệm vào mảng thứ tư
  strcat(full_name, first_name);

  // Thêm dấu cách
  strcat(full_name, " ");

  // Gán tên vào mảng thứ tư
  strcat(full_name, middle_name);

  // Hiển thị tên được sắp xếp trên màn hình
  cout << "Ten duoc sap xep: " << full_name << endl;

  return 0;
}
