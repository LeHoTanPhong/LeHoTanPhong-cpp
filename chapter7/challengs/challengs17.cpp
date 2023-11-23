#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
  // Mở tệp Teams.txt
  ifstream fin("Teams.txt");

  // Nếu tệp không tồn tại, hãy thông báo lỗi
  if (!fin) {
    cout << "Tep khong ton tai." << endl;
    return 1;
  }

  // Đọc nội dung của tệp Teams.txt
  string teams[100];
  int i = 0;
  while (!fin.eof()) {
    fin >> teams[i];
    i++;
  }

  // Đóng tệp Teams.txt
  fin.close();

  // Hiển thị nội dung của tệp Teams.txt
  cout << "Danh sach cac doi bong chay Major League da vo dich World Series:" << endl;
  for (int j = 0; j < i; j++) {
    cout << teams[j] << endl;
  }

  // Nhập tên của đội
  cout << "Nhap ten cua doi: ";
  string team;
  cin >> team;

  // Mở tệp WorldSeriesWinners.txt
  ifstream fin2("WorldSeriesWinners.txt");

  // Nếu tệp không tồn tại, hãy thông báo lỗi
  if (!fin2) {
    cout << "Tep khong ton tai." << endl;
    return 1;
  }

  // Đếm số lần đội đó đã vô địch World Series
  int count = 0;
  while (!fin2.eof()) {
    fin2 >> team;
    if (team == teams[i]) {
      count++;
    }
  }

  // Đóng tệp WorldSeriesWinners.txt
  fin2.close();

  // Hiển thị số lần đội đó đã vô địch World Series
  cout << "So lan doi " << team << " da vo dịch World Series la: " << count << endl;

  return 0;
}
