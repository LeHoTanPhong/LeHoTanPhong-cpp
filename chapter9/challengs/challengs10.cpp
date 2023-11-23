#include <iostream>

using namespace std;

int *reverseArray(int *array, int size) {
  // Khởi tạo mảng mới
  int *reversedArray = new int[size];

  // Sao chép các giá trị của mảng ban đầu sang mảng mới
  for (int i = 0; i < size; i++) {
    reversedArray[i] = array[i];
  }

  // Đảo ngược các giá trị của mảng mới
  for (int i = 0; i < size / 2; i++) {
    int temp = reversedArray[i];
    reversedArray[i] = reversedArray[size - 1 - i];
    reversedArray[size - 1 - i] = temp;
  }

  // Trả về mảng mới
  return reversedArray;
}

int main() {
  // Mảng ban đầu
  int array[] = {1, 2, 3, 4, 5};

  // Kích thước của mảng
  int size = sizeof(array) / sizeof(array[0]);

  // Gọi hàm reverseArray()
  int *reversedArray = reverseArray(array, size);

  // Hiển thị mảng đảo ngược
  for (int i = 0; i < size; i++) {
    cout << reversedArray[i] << " ";
  }
  cout << endl;

  // Giải phóng bộ nhớ
  delete[] reversedArray;

  return 0;
}
