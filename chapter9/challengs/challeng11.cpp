#include <iostream>

using namespace std;

int *expandArray(int *array, int size) {
  // Khởi tạo mảng mới
  int *expandedArray = new int[size * 2];

  // Sao chép các giá trị của mảng ban đầu sang mảng mới
  for (int i = 0; i < size; i++) {
    expandedArray[i] = array[i];
  }

  // Khởi tạo các phần tử không được sử dụng của mảng mới có giá trị 0
  for (int i = size; i < size * 2; i++) {
    expandedArray[i] = 0;
  }

  // Trả về mảng mới
  return expandedArray;
}

int main() {
  // Mảng ban đầu
  int array[] = {1, 2, 3, 4, 5};

  // Kích thước của mảng
  int size = sizeof(array) / sizeof(array[0]);

  // Gọi hàm expandArray()
  int *expandedArray = expandArray(array, size);

  // Hiển thị mảng mở rộng
  for (int i = 0; i < size * 2; i++) {
    cout << expandedArray[i] << " ";
  }
  cout << endl;

  // Giải phóng bộ nhớ
  delete[] expandedArray;

  return 0;
}
