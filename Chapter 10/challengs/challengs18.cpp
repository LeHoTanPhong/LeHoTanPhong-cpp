#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct Contact {
  string name;
  string phone_number;
};

const Contact contacts[] = {
  {"Alejandra Cruz", "555-1223"},
  {"Joe Looney", "555-0097"},
  {"Geri Palmer", "555-8787"},
  {"Lý Thần", "555-1212"},
  {"Holly Gaddis", "555-8878"},
  {"Sam Wiggins", "555-0998"},
  {"Bob Kain", "555-8712"},
  {"Tim Haynes", "555-7676"},
  {"Warren Gaddis", "555-9037"},
  {"Jean James", "555-4939"},
  {"Ron Palmer", "555-2783"},
};

int main() {
  // Yêu cầu nhập tên hoặc một phần tên để tìm kiếm
  string search_term;
  cout << "Nhap ten hoac mot phan ten de tim kiem: ";
  cin >> search_term;

  // Tìm kiếm các kết quả khớp trong mảng
  vector<Contact> results;
  for (Contact contact : contacts) {
    if (contact.name.find(search_term) != string::npos) {
      results.push_back(contact);
    }
  }

  // In các kết quả
  if (results.empty()) {
    cout << "Khong tim thay ket qua." << endl;
  } else {
    for (Contact contact : results) {
      cout << contact.name << ", " << contact.phone_number << endl;
    }
  }

  return 0;
}
