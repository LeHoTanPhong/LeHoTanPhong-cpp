#include <iostream>
#include <string>

using namespace std;

const map<char,string> morse_code = {
  {'a', ".-"},
  {'b', "-..."},
  {'c', "-.-."},
  {'d', "-.."},
  {'e', "."},
  {'f', "..-."},
  {'g', "--."},
  {'h', "...."},
  {'i', ".."},
  {'j', ".---"},
  {'k', "-.-"},
  {'l', ".-.."},
  {'m', "--"},
  {'n', "-."},
  {'o', "---"},
  {'p', ".--."},
  {'q', "--.-"},
  {'r', ".-."},
  {'s', "..."},
  {'t', "-"},
  {'u', "..-"},
  {'v', "...-"},
  {'w', ".--"},
  {'x', "-..-"},
  {'y', "-.--"},
  {'z', "--.."},
  {'0', "-----"},
  {'1', ".----"},
  {'2', "..---"},
  {'3', "...--"},
  {'4', "....-"},
  {'5', "....."},
  {'6', "-...."},
  {'7', "--..."},
  {'8', "---.."},
  {'9', "----."},
  {' ', " "},
};

string to_morse(const string &text) {
  string result = "";
  for (char c : text) {
    result += morse_code[c];
  }
  return result;
}

int main() {
  // Yêu cầu nhập chuỗi
  string text;
  cout << "Nhap chuoi: ";
  getline(cin, text);

  // Chuyển chuỗi sang mã Morse
  string morse_code_text = to_morse(text);

  // In chuỗi mã Morse
  cout << "Ma Morse: " << morse_code_text << endl;

  return 0;
}
