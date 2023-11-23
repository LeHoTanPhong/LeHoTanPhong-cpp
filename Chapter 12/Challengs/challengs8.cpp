#include <iostream>
#include <fstream>
using namespace std;

void arrayToFile(const char* fileName, int* arr, int size) {
    // Mở tệp để ghi
    ofstream outFile(fileName, ios::binary);

    // Kiểm tra xem tệp có mở thành công hay không
    if (!outFile) {
        cerr << "Không thể mở tệp để ghi.\n";
        return;
    }

    // Ghi nội dung của mảng vào tệp
    outFile.write(reinterpret_cast<char*>(arr), size * sizeof(int));

    // Đóng tệp
    outFile.close();
}

void fileToArray(const char* fileName, int* arr, int size) {
    // Mở tệp để đọc
    ifstream inFile(fileName, ios::binary);

    // Kiểm tra xem tệp có mở thành công hay không
    if (!inFile) {
        cerr << "Không thể mở tệp để đọc.\n";
        return;
    }

    // Đọc nội dung từ tệp vào mảng
    inFile.read(reinterpret_cast<char*>(arr), size * sizeof(int));

    // Đóng tệp
    inFile.close();
}

int main() {
    const char* fileName = "arrayFile.bin";
    const int arrSize = 5;
    int myArray[arrSize] = {1, 2, 3, 4, 5};

    // Ghi mảng vào tệp
    arrayToFile(fileName, myArray, arrSize);

    // Đọc mảng từ tệp
    int newArray[arrSize];
    fileToArray(fileName, newArray, arrSize);

    // Hiển thị nội dung của mảng
    cout << "Mang sau khi doc tu tep:\n";
    for (int i = 0; i < arrSize; ++i) {
        cout << newArray[i] << " ";
    }

    return 0;
}
