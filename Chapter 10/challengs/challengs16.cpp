#include <iostream>
#include <string>

using namespace std;

string pig_latinize(const string &word) {
  // Lấy chữ cái đầu tiên của từ
  char first_letter = word[0];

  // Tạo một chuỗi mới bao gồm phần còn lại của từ
  string remaining_word = word.substr(1);

  // Thêm chữ cái đầu tiên vào cuối chuỗi mới
  remaining_word += first_letter;

  // Thêm chuỗi "ay" vào cuối chuỗi mới
  remaining_word += "ay";

  // Trả về chuỗi mới
  return remaining_word;
}

int main() {
  // Yêu cầu nhập câu
  string sentence;
  cout << "Nhap cau ";
  getline(cin, sentence);

  // Tạo một chuỗi kết quả
  string result = "";

  // Lặp qua từng từ trong câu
  for (string word : sentence.split(" ")) {
    // Chuyển đổi từ thành Pig Latin
    result += pig_latinize(word) + " ";
  }

  // In chuỗi kết quả
  cout << result << endl;

  return 0;
}
