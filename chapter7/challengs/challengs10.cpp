#include <iostream>
#include <string>

using namespace std;

// Mảng chứa các câu trả lời đúng
string correctAnswers[20] = {
    "A", "D", "B", "B", "C",
    "B", "A", "B", "C", "D",
    "A", "C", "D", "B", "D",
    "C", "C", "A", "D", "B",
};

// Mảng chứa các câu trả lời của học sinh
string studentAnswers[20];

int main() {
  // Lặp qua tất cả các câu hỏi
  for (int i = 0; i < 20; i++) {
    // Hiển thị câu hỏi
    cout << "Cau hoi " << i + 1 << ": " << correctAnswers[i] << endl;

    // Yêu cầu người dùng nhập câu trả lời
    cout << "Nhap cau tra loi cua ban: ";
    cin >> studentAnswers[i];

    // Xác thực đầu vào
    while (studentAnswers[i] != "A" && studentAnswers[i] != "B" && studentAnswers[i] != "C" && studentAnswers[i] != "D") {
      cout << "Cau tra loi chi co the chon A, B, C hoac D. Vui long nhap lai: ";
      cin >> studentAnswers[i];
    }
  }

  // Tính số câu trả lời đúng
  int correctCount = 0;
  for (int i = 0; i < 20; i++) {
    if (studentAnswers[i] == correctAnswers[i]) {
      correctCount++;
    }
  }

  // Xem xét kết quả
  if (correctCount >= 15) {
    cout << "Hoc sinh da dau!" << endl;
  } else {
    cout << "Hoc sinh da truoc" << endl;
  }

  // Hiển thị kết quả
  cout << "Tong so cau hoi dung: " << correctCount << endl;
  cout << "Tong so cau hoi sai: " << 20 - correctCount << endl;
  cout << "Danh sach cau hoi sai: ";
  for (int i = 0; i < 20; i++) {
    if (studentAnswers[i] != correctAnswers[i]) {
      cout << i + 1 << " ";
    }
  }
  cout << endl;

  return 0;
}
