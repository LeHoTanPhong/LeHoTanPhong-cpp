#include <iostream>
#include <fstream>
#include <cctype> // Để sử dụng hàm std::toupper và std::tolower
using namespace std;

int main() {
    string inputFileName, outputFileName;
    
    // Nhập tên file đầu vào từ người dùng
    cout << "Nhap ten file dau vao: ";
    getline(cin, inputFileName);

    // Nhập tên file đầu ra từ người dùng
    cout << "Nhap ten file dau ra: ";
    getline(cin, outputFileName);

    // Mở tệp đầu vào để đọc
    ifstream inputFile(inputFileName);

    // Kiểm tra xem tệp có mở thành công không
    if (!inputFile.is_open()) {
        cerr << "Khong the mo file dau vao.\n";
        return 1; // Kết thúc chương trình với mã lỗi 1
    }

    // Mở tệp đầu ra để ghi
    ofstream outputFile(outputFileName);

    // Đọc từng dòng trong tệp đầu vào
    string line;
    while (getline(inputFile, line)) {
        // Thay đổi chữ cái thành chữ thường (tolower) ngoại trừ chữ cái đầu tiên của mỗi câu
        for (size_t i = 0; i < line.length(); ++i) {
            if (i == 0 || (i > 0 && line[i - 1] == '.')) {
                line[i] = toupper(line[i]); // Chữ cái đầu tiên của mỗi câu viết hoa
            } else {
                line[i] = tolower(line[i]); // Chữ cái còn lại viết thường
            }
        }

        // Ghi dòng đã sửa vào tệp đầu ra
        outputFile << line << endl;
    }

    // Đóng tệp đầu vào và đầu ra
    inputFile.close();
    outputFile.close();

    cout << "Chuong trinh da chay thanh cong. Ket qua da duoc ghi vao file dau ra.\n";

    return 0;
}
