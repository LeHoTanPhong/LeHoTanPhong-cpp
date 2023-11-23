#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Mảng chứa các câu trả lời đúng
string correctAnswers[20];

// Mảng chứa các câu trả lời của học sinh
string studentAnswers[20];

int main() {
  // Mở tệp chứa các câu trả lời đúng
  ifstream fin("CorrectAnswers.txt");

  // Nếu tệp không tồn tại, hãy thông báo lỗi
  if (!fin) {
    cout << "Tep khong ton tai." << endl;
    return 1;
  }

  // Đọc các câu trả lời đúng từ tệp
  for (int i = 0; i < 20; i++) {
    fin >> correctAnswers[i];
  }

  // Đóng tệp
  fin.close();

  // Mở tệp chứa câu trả lời của học sinh
  ifstream fin2("StudentAnswers.txt");

  // Nếu tệp không tồn tại, hãy thông báo lỗi
  if (!fin2) {
    cout << "Tep khong ton tai." << endl;
    return 1;
  }

  // Đọc các câu trả lời của học sinh từ tệp
  for (int i = 0; i < 20; i++) {
    fin2 >> studentAnswers[i];
  }

  // Đóng tệp
  fin2.close();

  // Tính số câu hỏi bị bỏ lỡ
  int missedCount = 0;
  for (int i = 0; i < 20; i++) {
    if (correctAnswers[i] != studentAnswers[i]) {
      missedCount++;
    }
  }

  // Tính tỷ lệ câu hỏi trả lời đúng
  double correctRate = 100.0 * (20 - missedCount) / 20;

  // Xem xét kết quả
  if (correctRate >= 70.0) {
    cout << "Hoc sinh da qua ky thi!" << endl;
  } else {
    cout << "Hoc sinh truot ky thi!" << endl;
  }

  // Hiển thị danh sách các câu hỏi bị bỏ lỡ
  cout << "Danh sach cau hoi bi bo lo:" << endl;
  for (int i = 0; i < 20; i++) {
    if (correctAnswers[i] != studentAnswers[i]) {
      cout << "Cau hoi " << i + 1 << ": " << correctAnswers[i] << " (ban tra loi " << studentAnswers[i] << ")" << endl;
    }
  }

  return 0;
}
