#include <iostream>

using namespace std;

// Hàm yêu cầu người dùng nhập điểm kiểm tra và xác nhận nó
void getScore(int& score) {
  // Yêu cầu người dùng nhập điểm kiểm tra
  cout << "Nhap diem kiem tra: ";
  cin >> score;

  // Xác thực đầu vào
  while (score < 0 || score > 100) {
    cout << "Diem kiem tra tu 0 den 100. Vui lòng nhập lại: ";
    cin >> score;
  }
}

// Hàm tìm và trả về điểm thấp nhất trong năm điểm được truyền cho nó
int findLowest(int scores[]) {
  // Khởi tạo biến để lưu điểm thấp nhất
  int lowestScore = scores[0];

  // Tìm điểm thấp nhất
  for (int i = 1; i < 5; i++) {
    if (scores[i] < lowestScore) {
      lowestScore = scores[i];
    }
  }

  // Trả về điểm thấp nhất
  return lowestScore;
}

// Hàm tính toán và hiển thị giá trị trung bình của 4 giá trị cao nhất
void calcAverage(int scores[]) {
  // Tìm điểm thấp nhất
  int lowestScore = findLowest(scores);

  // Tính tổng của 4 giá trị cao nhất
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    if (scores[i] != lowestScore) {
      sum += scores[i];
    }
  }

  // Tính giá trị trung bình
  float average = sum / 4.0;

  // Hiển thị giá trị trung bình
  cout << "Diem trung binh la:  " << average << endl;
}

int main() {
  // Khởi tạo mảng để lưu trữ các điểm kiểm tra
  int scores[5];

  // Nhập năm điểm kiểm tra
  for (int i = 0; i < 5; i++) {
    getScore(scores[i]);
  }

  // Tính toán và hiển thị điểm trung bình
  calcAverage(scores);

  return 0;
}
