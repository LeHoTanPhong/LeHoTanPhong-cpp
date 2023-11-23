#include <iostream>
#include <string>

using namespace std;

// Hàm này yêu cầu người dùng nhập số vụ tai nạn ô tô được báo cáo ở một khu vực
int getNumAccidents(string region) {
  int numAccidents;
  cout << "Nhap so vu tai nan o to trong khu vuc: " << region << " trong nam qua: ";
  cin >> numAccidents;

  // Xác thực đầu vào
  while (numAccidents < 0) {
    cout << "So vu tai nan la so nguyen duong. Vui long nhap lai: ";
    cin >> numAccidents;
  }

  return numAccidents;
}

// Hàm này xác định khu vực có ít vụ tai nạn ô tô nhất và in tên của khu vực đó
void findLowest(int numAccidentsNorth, int numAccidentsSouth, int numAccidentsEast,
                int numAccidentsWest, int numAccidentsCentral) {
  // Khởi tạo biến để lưu khu vực có ít vụ tai nạn nhất và số vụ tai nạn của nó
  int lowestNumAccidents = numAccidentsNorth;
  string lowestRegion = "Bac";

  // So sánh số vụ tai nạn của tất cả các khu vực
  if (numAccidentsSouth < lowestNumAccidents) {
    lowestNumAccidents = numAccidentsSouth;
    lowestRegion = "Nam";
  }

  if (numAccidentsEast < lowestNumAccidents) {
    lowestNumAccidents = numAccidentsEast;
    lowestRegion = "Đong";
  }

  if (numAccidentsWest < lowestNumAccidents) {
    lowestNumAccidents = numAccidentsWest;
    lowestRegion = "Tay";
  }

  if (numAccidentsCentral < lowestNumAccidents) {
    lowestNumAccidents = numAccidentsCentral;
    lowestRegion = "Trung Bo";
  }

  // In tên của khu vực có ít vụ tai nạn nhất
  cout << "Khu vuc lai xe an toan nhat la " << lowestRegion << " voi " << lowestNumAccidents
       << " vu tai nan o to duoc bao cao." << endl;
}

int main() {
  // Khởi tạo biến để lưu số vụ tai nạn ô tô của mỗi khu vực
  int numAccidentsNorth = getNumAccidents("Bac");
  int numAccidentsSouth = getNumAccidents("Nam");
  int numAccidentsEast = getNumAccidents("Dong");
  int numAccidentsWest = getNumAccidents("Tay");
  int numAccidentsCentral = getNumAccidents("Trung Bo");

  // Gọi hàm findLowest()
  findLowest(numAccidentsNorth, numAccidentsSouth, numAccidentsEast, numAccidentsWest,
             numAccidentsCentral);

  return 0;
}
