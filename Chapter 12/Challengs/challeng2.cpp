#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>  // Thư viện này sử dụng hàm system("pause")

using namespace std;

const int LINES_PER_PAGE = 24;

void displayFileContent(const string& fileName) {
    ifstream file(fileName);

    if (!file.is_open()) {
        cout << "Khong the mo tep. Kiem tra lai ten tep.\n";
        return;
    }

    string line;
    int lineCount = 0;

    while (getline(file, line)) {
        cout << line << endl;
        lineCount++;

        if (lineCount % LINES_PER_PAGE == 0) {
            cout << "Nhan phim bat ki de tiep tuc...";
            system("pause");  // Tạm dừng chương trình và đợi người dùng nhấn phím
            cout << endl;
        }
    }

    file.close();
}

int main() {
    string fileName;
    cout << "Nhap ten tep: ";
    getline(cin, fileName);

    displayFileContent(fileName);

    return 0;
}
