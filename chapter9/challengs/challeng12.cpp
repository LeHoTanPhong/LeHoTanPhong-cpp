#include <iostream>

using namespace std;

int *shiftArray(int *array, int size) {
  // Khởi tạo mảng mới
  int *shiftedArray = new int[size + 1];

  // Đặt phần tử đầu tiên của mảng mới thành 0
  shiftedArray[0] = 0;

  // Sao chép các phần tử của mảng đối số sang mảng mới
  for (int i = 1; i <= size; i++) {
    shiftedArray[i] = array[i - 1];
  }

  // Trả về mảng mới
  return shiftedArray;
}

int main() {
  // Mảng ban đầu
  int array[] = {1, 2, 3, 4, 5};

  // Kích thước của mảng
  int size = sizeof(array) / sizeof(array[0]);

  // Gọi hàm shiftArray()
  int *shiftedArray = shiftArray(array, size);

  // Hiển thị mảng dịch chuyển
  for (int i = 0; i <= size; i++) {
    cout << shiftedArray[i] << " ";
  }
  cout << endl;

  // Giải phóng bộ nhớ
  delete[] shiftedArray;

  return 0;
}
