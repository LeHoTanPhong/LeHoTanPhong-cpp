#include <iostream>
#include <string>
using namespace std;

string replace_substring(const string &str1, const string &str2, const string &str3);

int main() {
  // Khai báo chuỗi
  string str1 = "con cho nhay qua hang rao";
  string str2 = "cai";
  string str3 = "cai do";

  // Thay thế chuỗi con
  string result = replace_substring(str1, str2, str3);

  // Hiển thị chuỗi kết quả
  cout << "Chuoi ket qua: " << result << endl;

  return 0;
}
