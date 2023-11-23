#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

const int LINES_TO_DISPLAY = 10;

// Hàm để hiển thị 10 dòng cuối cùng của tệp
void displayFileTail(const string& fileName) {
    ifstream file(fileName);

    if (!file.is_open()) {
        cout << "Khong the mo tep. Vui long nhap lai.\n";
        return;
    }

    vector<string> lines;
    string line;

    // Đọc từng dòng và lưu vào vector
    while (getline(file, line)) {
        lines.push_back(line);
        if (lines.size() > LINES_TO_DISPLAY) {
            lines.erase(lines.begin()); // Giữ kích thước vector không quá LINES_TO_DISPLAY
        }
    }

    file.close();

    // Hiển thị 10 dòng cuối cùng
    for (const string& l : lines) {
        cout << l << endl;
    }

    if (lines.size() == 0) {
        cout << "Tep trong.\n";
    } else if (lines.size() < LINES_TO_DISPLAY) {
        cout << "Toan bo tep da duoc hien thi.\n";
    }
}

int main() {
    string fileName;
    cout << "Nhap ten tep: ";
    getline(cin, fileName);

    displayFileTail(fileName);

    return 0;
}
