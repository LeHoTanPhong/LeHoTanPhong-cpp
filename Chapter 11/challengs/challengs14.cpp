#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX_PARTS_IN_BOX = 30;
const int NUM_BOXES = 10;

// Cấu trúc lưu trữ thông tin về mỗi thùng hàng
struct Box {
    string partDescription;
    int partQuantity;
};

// Hàm để hiển thị thông tin về mỗi thùng hàng
void displayInventory(const Box boxes[]) {
    cout << "\n===== THUNG HANG TON KHO =====\n";
    cout << setw(20) << "Mo ta phan" << setw(25) << "So luong bo phan trong thung" << endl;
    cout << "---------------------------------------------------------\n";

    for (int i = 0; i < NUM_BOXES; ++i) {
        cout << setw(20) << boxes[i].partDescription << setw(25) << boxes[i].partQuantity << endl;
    }
}

// Hàm để thêm bộ phận vào thùng hàng
void addParts(Box& box, int quantity) {
    // Xác thực đầu vào: Không chấp nhận giá trị âm hoặc vượt quá số lượng tối đa của thùng hàng
    if (quantity > 0 && box.partQuantity + quantity <= MAX_PARTS_IN_BOX) {
        box.partQuantity += quantity;
        cout << "Da them " << quantity << " bo phan vao thung " << box.partDescription << ".\n";
    } else {
        cout << "Loi: So luong khong hop le hoac vuot qua gioi han cho thung " << box.partDescription << ".\n";
    }
}

// Hàm để loại bỏ bộ phận khỏi thùng hàng
void removeParts(Box& box, int quantity) {
    // Xác thực đầu vào: Không chấp nhận giá trị âm hoặc vượt quá số lượng hiện có trong thùng hàng
    if (quantity > 0 && quantity <= box.partQuantity) {
        box.partQuantity -= quantity;
        cout << "Đa loai bo " << quantity << " bo phan khoi thung " << box.partDescription << ".\n";
    } else {
        cout << "Loi: So luong khong hop le hoac lon hon so luong hien co trong thung " << box.partDescription << ".\n";
    }
}

int main() {
    // Khởi tạo mảng chứa thông tin về mỗi thùng hàng
    Box inventory[NUM_BOXES] = {
        {"Van", 10},
        {"Vong bi", 5},
        {"Bushing", 15},
        {"Khop noi", 21},
        {"Mat bich", 7},
        {"Banh rang", 5},
        {"Vo hop so", 5},
        {"Kep chan khong", 25},
        {"Cap", 18},
        {"Thanh", 12}
    };

    while (true) {
        // Hiển thị thông tin về mỗi thùng hàng
        displayInventory(inventory);

        int choice;
        cout << "\nChon mot so de quan ly thung hang hoac nhap 0 de thoat: ";
        cin >> choice;

        if (choice < 1 || choice > NUM_BOXES) {
            cout << "Cam on ban da su dung dich vu.\n";
            break;
        }

        int action;
        cout << "Chon mot so de:\n";
        cout << "1. Them bo phan vao thung hang.\n";
        cout << "2. Loai bo bo phan khoi thung hang.\n";
        cout << "0. Quay lai menu chinh.\n";
        cout << "Lua chon cua ban: ";
        cin >> action;

        if (action == 0) {
            continue;
        }

        int quantity;
        cout << "Nhap so luong bo phan: ";
        cin >> quantity;

        if (action == 1) {
            addParts(inventory[choice - 1], quantity);
        } else if (action == 2) {
            removeParts(inventory[choice - 1], quantity);
        }
    }

    return 0;
}
