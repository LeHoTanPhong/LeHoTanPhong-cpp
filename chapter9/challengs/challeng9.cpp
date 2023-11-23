#include <iostream>

using namespace std;

pair<int, int> median(int *array, int size) {
  // Nếu số phần tử trong mảng là lẻ,
  // thì trung vị là giá trị trung bình của phần tử ở giữa
  if (size % 2 == 1) {
    return {array[size / 2], array[size / 2]};
  } else {
    // Nếu số phần tử trong mảng là chẵn,
    // thì trung vị là trung bình của hai phần tử ở giữa
    return {(array[size / 2] + array[size / 2 - 1]) / 2,
            (array[size / 2] + array[size / 2 - 1]) / 2};
  }
}

int main() {
  // Mảng
  int array[] = {1, 2, 3, 4, 5};

  // Số phần tử trong mảng
  int size = sizeof(array) / sizeof(array[0]);

  // Gọi hàm median()
  pair<int, int> medianValue = median(array, size);

  // Hiển thị kết quả
  cout << "So trung vi cua mang la: " << medianValue.first << ", " << medianValue.second << endl;

  return 0;
}
