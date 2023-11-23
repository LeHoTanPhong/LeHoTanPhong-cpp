#include <iostream>

using namespace std;

// Hàm yêu cầu người dùng nhập điểm của giám khảo và xác nhận nó
void getJudgeData(float& score) {
  // Yêu cầu người dùng nhập điểm
  cout << "Nhap diem cua giam khao: ";
  cin >> score;

  // Xác thực đầu vào
  while (score < 0 || score > 10) {
    cout << "Diem trung binh cua giam khao phai tu 0 den 10. Vui long nhap lai: ";
    cin >> score;
  }
}

// Hàm tìm và trả về điểm thấp nhất trong năm điểm được truyền cho nó
int findLowest(float scores[]) {
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

// Hàm tìm và trả về điểm cao nhất trong năm điểm được truyền cho nó
int findHighest(float scores[]) {
  // Khởi tạo biến để lưu điểm cao nhất
  int highestScore = scores[0];

  // Tìm điểm cao nhất
  for (int i = 1; i < 5; i++) {
    if (scores[i] > highestScore) {
      highestScore = scores[i];
    }
  }

  // Trả về điểm cao nhất
  return highestScore;
}

// Hàm tính toán và hiển thị giá trị trung bình của ba điểm
// giữ nguyên sau khi loại bỏ điểm cao nhất và thấp nhất mà người biểu diễn nhận được.
void calcScore(float scores[]) {
  // Tìm điểm thấp nhất
  int lowestScore = findLowest(scores);

  // Tìm điểm cao nhất
  int highestScore = findHighest(scores);

  // Loại bỏ điểm cao nhất và thấp nhất
  float scoresWithoutLowestAndHighest[3];
  for (int i = 0; i < 3; i++) {
    scoresWithoutLowestAndHighest[i] = scores[i];
  }
  scoresWithoutLowestAndHighest[1] = scores[2];
  scoresWithoutLowestAndHighest[2] = scores[3];
  scoresWithoutLowestAndHighest[0] = scores[4];

  // Tính tổng của ba điểm còn lại
  float sum = 0;
  for (int i = 0; i < 3; i++) {
    sum += scoresWithoutLowestAndHighest[i];
  }

  // Tính giá trị trung bình
  float average = sum / 3.0;

  // Hiển thị giá trị trung bình
  cout << "Diem cuoi la:  " << average << endl;
}

int main() {
  // Khởi tạo mảng để lưu trữ các điểm của giám khảo
  float scores[5];

  // Nhập điểm của năm giám khảo
  for (int i = 0; i < 5; i++) {
    getJudgeData(scores[i]);
  }

  // Tính toán và hiển thị điểm cuối cùng
  calcScore(scores);

  return 0;
}
