#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  // Hỏi người dùng có bao nhiêu học sinh được khảo sát
  int numberOfStudents;
  cout << "Hay nhap so luong hoc sinh khao sat: ";
  cin >> numberOfStudents;

  // Khởi tạo mảng
  int *numberOfMoviesWatched = new int[numberOfStudents];

  // Cho phép người dùng nhập số phim từng học sinh đã xem
  for (int i = 0; i < numberOfStudents; i++) {
    cout << "Hay nhap so luong hoc sinh thu " << i + 1 << " da xem: ";
    cin >> numberOfMoviesWatched[i];

    // Xác thực đầu vào
    while (numberOfMoviesWatched[i] < 0) {
      cout << "So phim la so nguyen duong. Vui long nhap lai: ";
      cin >> numberOfMoviesWatched[i];
    }
  }

  // Tính toán giá trị trung bình
  double average = 0;
  for (int i = 0; i < numberOfStudents; i++) {
    average += numberOfMoviesWatched[i];
  }
  average /= numberOfStudents;

  // Tính toán giá trị trung vị
  pair<int, int> median = median(numberOfMoviesWatched, numberOfStudents);

  // Tính toán giá trị mốt
  int mode = numberOfMoviesWatched[0];
  int count = 1;
  for (int i = 1; i < numberOfStudents; i++) {
    if (numberOfMoviesWatched[i] == mode) {
      count++;
    } else if (count > 1) {
      break;
    } else {
      mode = numberOfMoviesWatched[i];
      count = 1;
    }
  }

  // Hiển thị kết quả
  cout << "Gia tri trung binh: " << average << endl;
  cout << "Gia tri trung vi: " << median.first << endl;
  cout << "Gia tri mot: " << mode << endl;

  // Giải phóng bộ nhớ
  delete[] numberOfMoviesWatched;

  return 0;
}
