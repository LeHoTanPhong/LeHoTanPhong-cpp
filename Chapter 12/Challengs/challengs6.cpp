#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string fileName, searchStr;
    int count = 0;

    // Nhập tên file từ người dùng
    cout << "Nhap ten file: ";
    getline(std::cin, fileName);

    // Mở tệp để đọc
    ifstream file(fileName);

    // Kiểm tra xem tệp có mở thành công không
    if (!file.is_open()) {
        cerr << "Khong the mo file.\n";
        return 1; // Kết thúc chương trình với mã lỗi 1
    }

    // Nhập chuỗi cần tìm kiếm từ người dùng
    cout << "Nhap chuoi can tim kiem: ";
    getline(std::cin, searchStr);

    // Đọc từng dòng trong tệp và kiểm tra xem chuỗi có xuất hiện không
    string line;
    while (std::getline(file, line)) {
        size_t found = line.find(searchStr);
        if (found != string::npos) {
            // Nếu chuỗi được tìm thấy, in dòng và tăng số lần xuất hiện
            std::cout << "Dong: " << line << endl;
            count++;
        }
    }

    // Báo cáo số lần chuỗi xuất hiện
    cout << "Chuoi '" << searchStr << "' xuat hien " << count << " lan trong file.\n";

    // Đóng tệp
    file.close();

    return 0;
}
