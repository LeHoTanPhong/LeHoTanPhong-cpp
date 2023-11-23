#include <iostream>
#include <string>

using namespace std;

int main() {
  // Yêu cầu nhập câu
  string sentence;
  cout << "Nhap cau: ";
  getline(cin, sentence);

  // Tạo một chuỗi kết quả
  string result = "";

  // Lặp qua từng ký tự trong câu
  for (int i = 0; i < sentence.length(); i++) {
    // Nếu ký tự là chữ cái
    if (isalpha(sentence[i])) {
      // Nếu ký tự hiện tại là ký tự đầu tiên của từ
      if (i == 0 || !isalpha(sentence[i - 1])) {
        result += sentence[i];
      } else {
        result += " " + sentence[i];
      }
    }
  }

  // In chuỗi kết quả
  cout << result << endl;

  return 0;
}
