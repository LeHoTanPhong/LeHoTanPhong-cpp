#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  // Mở tệp GirlNames.txt
  ifstream fin("GirlNames.txt");

  // Nếu tệp không tồn tại, hãy thông báo lỗi
  if (!fin) {
    cout << "Tệp không tồn tại." << endl;
    return 1;
  }

  // Đọc nội dung của tệp GirlNames.txt
  vector<string> girlNames;
  while (!fin.eof()) {
    string name;
    fin >> name;
    girlNames.push_back(name);
  }

  // Đóng tệp GirlNames.txt
  fin.close();

  // Mở tệp BoyNames.txt
  ifstream fin2("BoyNames.txt");

  // Nếu tệp không tồn tại, hãy thông báo lỗi
  if (!fin2) {
    cout << "Tệp không tồn tại." << endl;
    return 1;
  }

  // Đọc nội dung của tệp BoyNames.txt
  vector<string> boyNames;
  while (!fin2.eof()) {
    string name;
    fin2 >> name;
    boyNames.push_back(name);
  }

  // Đóng tệp BoyNames.txt
  fin2.close();

  // Xác định loại tên
  char gender;
  cout << "Là tên con trai (t) hay con gái (g): ";
  cin >> gender;

  // Nhập tên
  string name;
  cout << "Nhập tên: ";
  cin >> name;

  // Tìm kiếm tên
  bool found = false;
  if (gender == 't') {
    found = find(boyNames.begin(), boyNames.end(), name) != boyNames.end();
  } else if (gender == 'g') {
    found = find(girlNames.begin(), girlNames.end(), name) != girlNames.end();
  } else {
    cout << "Loại tên không hợp lệ." << endl;
    return 1;
  }

  // Hiển thị kết quả
  if (found) {
    cout << "Tên " << name << " là một trong 200 tên phổ biến nhất." << endl;
  } else {
    cout << "Tên " << name << " không phải là một trong 200 tên phổ biến nhất." << endl;
  }

  return 0;
}
