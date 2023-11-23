#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// Hàm tính giá trị trung bình số từ trong một câu
double averageWordsInSentence(const string& sentence) {
    istringstream iss(sentence);
    string word;
    int wordCount = 0;

    while (iss >> word) {
        wordCount++;
    }

    return static_cast<double>(wordCount);
}

// Hàm đọc nội dung từ tệp và tính giá trị trung bình số từ trong mỗi câu
void processFile(const char* fileName) {
    fstream inFile(fileName);
    if (!inFile) {
        cout << "Khong the mo tep de doc.\n";
        return;
    }

    string line;
    vector<double> averages;

    while (getline(inFile, line)) {
        // Tính giá trị trung bình số từ trong mỗi câu và thêm vào vector
        double average = averageWordsInSentence(line);
        averages.push_back(average);
    }

    inFile.close();

    // Hiển thị giá trị trung bình số từ trong mỗi câu
    cout << "Gia tri trung binh so tu trong moi cau:\n";
    for (double average : averages) {
        cout << average << '\n';
    }
}

int main() {
    const char* fileName = "text.txt";

    // Xử lý tệp và tính giá trị trung bình số từ trong mỗi câu
    processFile(fileName);

    return 0;
}
