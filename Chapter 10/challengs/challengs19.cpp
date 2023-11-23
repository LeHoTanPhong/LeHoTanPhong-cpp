#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Check {
 public:
  Check(int day, string payee, double amount) {
    this->day = day;
    this->payee = payee;
    this->amount = amount;
  }

  void Display() {
    cout << "Ngay: " << setfill('0') << setw(2) << day << "/" << setfill('0')
         << setw(2) << month << "/" << year << endl;
    cout << "Tra theo don dat hang cua: " << payee << endl;
    cout << "$" << fixed << setprecision(2) << amount << endl;
    cout << "Mot nghin " << spell_number(amount) << " xu" << endl;
  }

 private:
  int day;
  int month;
  int year;
  string payee;
  double amount;

  string spell_number(double amount) {
    string number = to_string(amount);
    string result = "";

    if (number.length() <= 2) {
      return number;
    }

    result += number[0];
    result += " nghin ";

    if (number.length() <= 3) {
      return result;
    }

    result += number[1];

    if (number[2] == '0') {
      return result;
    }

    result += " tram ";

    if (number.length() <= 4) {
      return result;
    }

    result += number[2];

    return result;
  }
};

int main() {
  // Yêu cầu nhập ngày
  int day;
  cout << "Nhap ngay (dd/mm/yyyy): ";
  cin >> day;

  // Yêu cầu nhập tên người nhận thanh toán
  string payee;
  cout << "Nhap ten nguoi nhan thanh toan: \n";
  cin >> payee;
  getline(cin, payee);

  // Yêu cầu nhập số tiền của séc
  double amount;
  cout << "Nhap so tien cua sec: ";
  cin >> amount;

  // Xác thực đầu vào
  if (amount < 0 || amount > 10000) {
    cout << "So tien khong hop le." << endl;
    return 1;
  }

  // Tạo đối tượng Check
  Check check(day, payee, amount);

  // Hiển thị bảng lương mô phỏng
  check.Display();

  return 0;
}
