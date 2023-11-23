#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Cấu trúc lưu trữ dữ liệu kiểm kê
struct InventoryItem {
    string description;
    int quantity;
    double wholesaleCost;
    double retailCost;
    string dateAdded;
};

// Hàm thêm bản ghi mới vào tệp
void addRecord(const char* fileName) {
    ofstream outFile(fileName, ios::app);
    if (!outFile) {
        std::cerr << "Khong the mo tep de ghi.\n";
        return;
    }

    InventoryItem newItem;

    // Nhập thông tin từ người dùng
    cout << "Mieu ta mon hang: ";
    getline(std::cin, newItem.description);

    cout << "So luong tren tay: ";
    cin >> newItem.quantity;

    cout << "Gia ban buon: ";
    cin >> newItem.wholesaleCost;

    cout << "Gia ban le: ";
    cin >> newItem.retailCost;

    cin.ignore(); // Đọc ký tự newline còn lại sau khi nhập số liệu
    cout << "Ngay them vao kho: ";
    getline(std::cin, newItem.dateAdded);

    // Ghi bản ghi vào tệp
    outFile << newItem.description << ' ' << newItem.quantity << ' '
            << newItem.wholesaleCost << ' ' << newItem.retailCost << ' '
            << newItem.dateAdded << '\n';

    outFile.close();
}

// Hàm hiển thị tất cả bản ghi trong tệp
void displayRecords(const char* fileName) {
    ifstream inFile(fileName);
    if (!inFile) {
        cout << "Khong the mo tep de doc.\n";
        return;
    }

    InventoryItem item;
    while (inFile >> item.description >> item.quantity >> item.wholesaleCost >> item.retailCost >> item.dateAdded) {
        // Hiển thị thông tin bản ghi
            cout << "Mieu ta mon hang: " << item.description << '\n'
                  << "So luong tren tay: " << item.quantity << '\n'
                  << "Gia ban buon: " << item.wholesaleCost << '\n'
                  << "Gia ban le: " << item.retailCost << '\n'
                  << "Ngay them vao kho: " << item.dateAdded << "\n\n";
    }

    inFile.close();
}

int main() {
    const char* fileName = "inventory.txt";
    int choice;

    do {
        // Hiển thị menu
             cout << "Menu:\n"
                  << "1. Them ban ghi moi\n"
                  << "2. Hien thi tat ca ban ghi\n"
                  << "3. Thoat\n"
                  << "Chon mot lua chon (1-3): ";
             cin >> choice;

        switch (choice) {
            case 1:
                addRecord(fileName);
                break;
            case 2:
                displayRecords(fileName);
                break;
            case 3:
                cout << "Ket thuc chuong trinh.\n";
                break;
            default:
                cout << "Lua chon khong hop le. Vui long nhap lai.\n";
        }

    } while (choice != 3);

    return 0;
}
