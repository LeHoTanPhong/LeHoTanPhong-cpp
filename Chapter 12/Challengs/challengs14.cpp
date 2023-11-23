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

// Hàm tính tổng giá trị bán buôn của hàng tồn kho
double calculateTotalWholesaleValue(const char* fileName) {
    ifstream inFile(fileName);
    if (!inFile) {
        cout << "Khong the mo tep de doc.\n";
        return 0.0;
    }

    InventoryItem item;
    double totalWholesaleValue = 0.0;

    while (inFile >> item.description >> item.quantity >> item.wholesaleCost >> item.retailCost >> item.dateAdded) {
        // Tính giá trị bán buôn của mỗi mặt hàng và cộng vào tổng
        totalWholesaleValue += item.wholesaleCost * item.quantity;
    }

    inFile.close();
    return totalWholesaleValue;
}

// Hàm tính tổng giá trị bán lẻ của hàng tồn kho
double calculateTotalRetailValue(const char* fileName) {
    ifstream inFile(fileName);
    if (!inFile) {
        cout << "Khong the mo tep de doc.\n";
        return 0.0;
    }

    InventoryItem item;
    double totalRetailValue = 0.0;

    while (inFile >> item.description >> item.quantity >> item.wholesaleCost >> item.retailCost >> item.dateAdded) {
        // Tính giá trị bán lẻ của mỗi mặt hàng và cộng vào tổng
        totalRetailValue += item.retailCost * item.quantity;
    }

    inFile.close();
    return totalRetailValue;
}

// Hàm tính tổng số lượng của tất cả các mặt hàng trong kho
int calculateTotalQuantity(const char* fileName) {
    ifstream inFile(fileName);
    if (!inFile) {
        cout << "Khong the mo tep de doc.\n";
        return 0;
    }

    InventoryItem item;
    int totalQuantity = 0;

    while (inFile >> item.description >> item.quantity >> item.wholesaleCost >> item.retailCost >> item.dateAdded) {
        // Cộng số lượng của mỗi mặt hàng vào tổng
        totalQuantity += item.quantity;
    }

    inFile.close();
    return totalQuantity;
}

int main() {
    const char* fileName = "inventory.txt";

    // Tính và hiển thị tổng giá trị bán buôn của hàng tồn kho
    double totalWholesaleValue = calculateTotalWholesaleValue(fileName);
    cout << "Tong gia tri ban buon cua hang ton kho: " << totalWholesaleValue << '\n';

    // Tính và hiển thị tổng giá trị bán lẻ của hàng tồn kho
    double totalRetailValue = calculateTotalRetailValue(fileName);
    cout << "Tong gia tri ban le cua hang ton kho: " << totalRetailValue << '\n';

    // Tính và hiển thị tổng số lượng của tất cả các mặt hàng trong kho
    int totalQuantity = calculateTotalQuantity(fileName);
    cout << "Tong so luong cua tat ca cac mat hang trong kho: " << totalQuantity << '\n';

    return 0;
}
