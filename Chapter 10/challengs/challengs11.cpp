#include <iostream>

using namespace std;

void upper_case(char *str);
void lower_case(char *str);
void reverse_case(char *str);

int main() {
  // Khai báo chuỗi
  char str[] = "Đay la mot chuoi.";

  // In chuỗi ban đầu
  cout << "Chuoi ban dau: " << str << endl;

  // Chuyển đổi chuỗi thành chữ hoa
  upper_case(str);

  // In chuỗi sau khi chuyển đổi thành chữ hoa
  cout << "Chuoi chu hoa: " << str << endl;

  // Chuyển đổi chuỗi thành chữ thường
  lower_case(str);

  // In chuỗi sau khi chuyển đổi thành chữ thường
  cout << "Chuoi chu thuong: " << str << endl;

  // Đảo ngược trường hợp của chuỗi
  reverse_case(str);

  // In chuỗi sau khi đảo ngược trường hợp
  cout << "Chuoi dao nguoc truong hop: " << str << endl;

  return 0;
}
