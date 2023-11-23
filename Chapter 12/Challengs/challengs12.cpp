#include <iostream>
#include <fstream>
#include <string>
using namespace std;


// Cấu trúc lưu trữ dữ liệu bán hàng
struct SalesData {
    string region;        // Tên phân khu
    int quarter;          // Quý (1, 2, 3, 4)
    double revenue;       // Doanh thu hàng quý
};

// Hàm tính tổng doanh thu của công ty trong mỗi quý
double calculateQuarterlyTotal(const char* fileName, int quarter) {
    ifstream inFile(fileName);
    if (!inFile) {
        cout << "Khong the mo tep de doc.\n";
        return 0.0;
    }

    SalesData data;
    double totalRevenue = 0.0;

    while (inFile >> data.region >> data.quarter >> data.revenue) {
        if (data.quarter == quarter) {
            totalRevenue += data.revenue;
        }
    }

    inFile.close();
    return totalRevenue;
}

// Hàm tính tổng doanh thu hàng năm của mỗi bộ phận
void calculateAnnualTotalByRegion(const char* fileName, const std::string& region) {
    ifstream inFile(fileName);
    if (!inFile) {
        cout << "Khong the mo tep de doc.\n";
        return;
    }

    SalesData data;
    double totalRevenue = 0.0;

    while (inFile >> data.region >> data.quarter >> data.revenue) {
        if (data.region == region) {
            totalRevenue += data.revenue;
        }
    }

    inFile.close();
    cout << "Tong doanh thu hang nam cua phan khu " << region << ": " << totalRevenue << '\n';
}

int main() {
    const char* fileName = "salesData.txt";
    const int numQuarters = 4;
    const string regions[] = { "Dong", "Tay", "Bac", "Nam" };

    // Tính và hiển thị tổng doanh thu của công ty trong mỗi quý
    for (int i = 1; i <= numQuarters; ++i) {
        double quarterlyTotal = calculateQuarterlyTotal(fileName, i);
        cout << "Tong doanh thu cua cong ty trong quy " << i << ": " << quarterlyTotal << '\n';
    }

    // Tính và hiển thị tổng doanh thu hàng năm của từng bộ phận
    for (const string& region : regions) {
        calculateAnnualTotalByRegion(fileName, region);
    }

    // Tính và hiển thị tổng doanh thu hàng năm của công ty
    double totalCompanyRevenue = 0.0;
    ifstream inFile(fileName);
    if (inFile) {
        SalesData data;
        while (inFile >> data.region >> data.quarter >> data.revenue) {
            totalCompanyRevenue += data.revenue;
        }
        inFile.close();
    }
    cout << "Tong doanh thu hang nam cua cong ty: " << totalCompanyRevenue << '\n';

    // TODO: Tính và hiển thị doanh thu trung bình hàng quý của các bộ phận

    // TODO: Xác định và hiển thị quý cao nhất và thấp nhất của tập đoàn

    return 0;
}
