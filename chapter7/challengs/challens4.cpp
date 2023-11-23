#include <iostream>

using namespace std;

void xuat_so_lon_hon_n(int a[], int n, int n) {
  /*
  Hiển thị tất cả các số trong mảng lớn hơn số n.

  Args:
    a: Mảng.
    n: Kích thước của mảng.
    n: Số cần so sánh.
  */

  for (int i = 0; i < n; i++) {
    if (a[i] > n) {
      cout << a[i] << " ";
    }
  }

  cout << endl;
}

int main() {
  // Khai báo mảng
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = 5;

  // Hiển thị các số trong mảng lớn hơn n
  xuat_so_lon_hon_n(a, sizeof(a) / sizeof(a[0]), n);

  return 0;
}
