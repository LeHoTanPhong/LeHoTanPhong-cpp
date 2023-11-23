#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Cấu trúc lưu trữ thông tin về đồ uống
struct Drink {
    string name;
    double cost;
    int quantity;
};

// Hàm để hiển thị danh sách đồ uống
void displayDrinkList(const Drink drinks[], int numDrinks) {
    cout << "\n===== DANH SACH DO UONG =====\n";
    cout << setw(20) << "Ten do dung" << setw(15) << "Gia" << setw(15) << "So luong\n";
    cout << "----------------------------------------\n";

    for (int i = 0; i < numDrinks; ++i) {
        cout << setw(20) << drinks[i].name << setw(15) << drinks[i].cost << setw(15) << drinks[i].quantity << endl;
    }
}

// Hàm để thực hiện giao dịch mua đồ uống
void performTransaction(Drink& drink) {
    int quantity;
    double amountPaid;

    cout << "\nBan chon '" << drink.name << "'.\n";
    cout << "Nhap so luong can mua: ";
    cin >> quantity;

    // Xác thực đầu vào: Không chấp nhận số âm hoặc giá trị lớn hơn $1,00
    while (quantity <= 0 || quantity * drink.cost > 1.00) {
        cout << "Nhap so luong hop le (lon hon 0 va tong gia khong vuot qua $1.00): ";
        cin >> quantity;
    }

    // Tính số tiền trả và cập nhật số lượng đồ uống còn lại trong máy
    amountPaid = quantity * drink.cost;
    cout << "So tien da thanh toan: $" << amountPaid << endl;
    cout << "So tien thay doi tro lai: $" << fixed << setprecision(2) << (amountPaid - quantity * drink.cost) << endl;

    // Cập nhật số lượng đồ uống còn lại trong máy
    drink.quantity -= quantity;
}

int main() {
    const int numDrinks = 5;
    Drink vendingMachine[numDrinks] = {
        {"Cola", 0.75, 20},
        {"Bia goc", 0.75, 20},
        {"Chanh-voi", 0.75, 20},
        {"Soda nho", 0.80, 20},
        {"Kem Soda", 0.80, 20}
    };

    double totalEarnings = 0.0;

    cout << "Chao mung ban den voi may do uong!\n";

    while (true) {
        displayDrinkList(vendingMachine, numDrinks);

        int choice;
        cout << "\nChon mot so do uong hoac nhap 0 de thoat: ";
        cin >> choice;

        if (choice < 1 || choice > numDrinks) {
            cout << "Cam on ban da su dung dich vu. Tong tien kiem duoc: $" << fixed << setprecision(2) << totalEarnings << endl;
            break;
        }

        performTransaction(vendingMachine[choice - 1]);

        // Cập nhật tổng số tiền kiếm được
        totalEarnings += (choice - 1) * vendingMachine[choice - 1].cost;
    }

    return 0;
}
