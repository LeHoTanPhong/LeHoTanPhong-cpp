#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // Yêu cầu người dùng nhập tên tệp
  cout << "Nhap ten tep: ";
  string filename;
  cin >> filename;

  // Mở tệp để đọc dữ liệu
  ifstream fin(filename);

  // Nếu tệp không tồn tại, hãy thông báo lỗi
  if (!fin) {
    cout << "Tap tin khong ton tai." << endl;
    return 1;
  }

  // Khai báo mảng để lưu trữ dữ liệu
  int numbers[100];

  // Đọc dữ liệu từ tệp
  int i = 0;
  while (!fin.eof()) {
    fin >> numbers[i];
    i++;
  }

  // Đóng tệp
  fin.close();

  // Tìm số thấp nhất
  int min_number = numbers[0];
  for (int j = 1; j < i; j++) {
    if (numbers[j] < min_number) {
      min_number = numbers[j];
    }
  }

  // Tìm số cao nhất
  int max_number = numbers[0];
  for (int j = 1; j < i; j++) {
    if (numbers[j] > max_number) {
      max_number = numbers[j];
    }
  }

  // Tính tổng các số
  int sum = 0;
  for (int j = 0; j < i; j++) {
    sum += numbers[j];
  }

  // Tính trung bình cộng
  double average = (double)sum / i;

  // Hiển thị kết quả
  cout << "So thap nhat: " << min_number << endl;
  cout << "So cao nhat: " << max_number << endl;
  cout << "Tong: " << sum << endl;
  cout << "Trung binh cong: " << average << endl;

  return 0;
}
