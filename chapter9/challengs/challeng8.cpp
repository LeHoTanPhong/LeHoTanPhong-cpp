#include <iostream>

using namespace std;

int mode(int *array, int size) {
  // Khởi tạo biến đếm và biến chế độ
  int count = 0, mode = array[0];

  // Lặp qua mảng
  for (int i = 1; i < size; i++) {
    // Tăng biến đếm nếu giá trị hiện tại bằng chế độ
    if (array[i] == mode) {
      count++;
    } else {
      // Nếu giá trị hiện tại không bằng chế độ,
      // kiểm tra xem giá trị hiện tại có tần số lớn hơn chế độ không
      if (count > 1) {
        // Nếu có, thì chế độ là giá trị hiện tại
        mode = array[i];
      }

      // Đặt lại biến đếm
      count = 1;
    }
  }

  // Nếu biến đếm lớn hơn 1, thì chế độ tồn tại
  if (count > 1) {
    return mode;
  } else {
    // Nếu biến đếm bằng 1, thì không có chế độ
    return -1;
  }
}

int main() {
  // Mảng
  int array[] = {1, 2, 3, 1, 2, 1, 4};

  // Số phần tử trong mảng
  int size = sizeof(array) / sizeof(array[0]);

  // Gọi hàm mode()
  int modeValue = mode(array, size);

  // Hiển thị kết quả
  cout << "Che do mang la: " << modeValue << endl;

  return 0;
}
