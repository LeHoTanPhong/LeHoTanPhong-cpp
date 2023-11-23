#include <iostream>
#include <fstream>
using namespace std;

void encodeFile(const char* inputFileName, const char* outputFileName, int key) {
    // Mở tệp để đọc
    ifstream inFile(inputFileName, ios::binary);

    // Kiểm tra xem tệp có mở thành công hay không
    if (!inFile) {
        std::cerr << "Khong the mo tep de doc.\n";
        return;
    }

    // Mở tệp để ghi
    ofstream outFile(outputFileName, ios::binary);

    // Kiểm tra xem tệp có mở thành công hay không
    if (!outFile) {
        cerr << "Khong the mo tep de ghi.\n";
        inFile.close();
        return;
    }

    char ch;
    while (inFile.get(ch)) {
        // Mã hóa ký tự bằng cách thêm key vào mã ASCII
        ch += key;

        // Ghi ký tự đã mã hóa vào tệp thứ hai
        outFile.put(ch);
    }

    // Đóng cả hai tệp
    inFile.close();
    outFile.close();
}

int main() {
    const char* inputFileName = "originalFile.txt";
    const char* outputFileName = "encodedFile.txt";
    const int key = 10;

    // Mã hóa tệp
    encodeFile(inputFileName, outputFileName, key);

    cout << "File da duoc ma hoa.\n";

    return 0;
}
