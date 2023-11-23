#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Hàm để đọc và hiển thị từng dòng trong tệp câu chuyện cười
void displayJoke(const string& jokeFileName) {
    ifstream jokeFile(jokeFileName);

    if (!jokeFile.is_open()) {
        cout << "Khong the mo tep joke. Kiem tra lai ten tep.\n";
        return;
    }

    string line;
    while (getline(jokeFile, line)) {
        cout << line << endl;
    }

    jokeFile.close();
}

// Hàm để hiển thị dòng cuối cùng của tệp dòng đục lỗ
void displayPunchline(const string& punchlineFileName) {
    ifstream punchlineFile(punchlineFileName);

    if (!punchlineFile.is_open()) {
        cout << "Khong the mo tep punchline. Kiem tra lai ten tep.\n";
        return;
    }

    string lastLine;
    string currentLine;
    while (getline(punchlineFile, currentLine)) {
        lastLine = currentLine;
    }

    cout << "\nDong ket thuc: " << lastLine << endl;

    punchlineFile.close();
}

int main() {
    // Tên tệp chứa câu chuyện cười
    string jokeFileName = "joke.txt";

    // Tên tệp chứa dòng kết thúc
    string punchlineFileName = "punchline.txt";

    // Hiển thị câu chuyện cười
    cout << "----- Cau chuyen cuoi -----\n";
    displayJoke(jokeFileName);

    // Hiển thị dòng kết thúc
    cout << "\n----- Dong ket thuc -----\n";
    displayPunchline(punchlineFileName);

    return 0;
}
