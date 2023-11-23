#include <iostream>
#include <string>

using namespace std;

struct CustomerAccount {
    string name;
    string address;
    string cityStateZip;
    string phoneNumber;
    double accountBalance;
    string lastPaymentDate;
};

const int MAX_ACCOUNTS = 10;
CustomerAccount accounts[MAX_ACCOUNTS];
int numAccounts = 0;

void displayMenu() {
    cout << "\n===== MENU =====\n";
    cout << "1. Nhap thong tin tai khoan\n";
    cout << "2. Hien thi thong tin tat ca tai khoan\n";
    cout << "3. Chinh sua thong tin tai khoan\n";
    cout << "4. Thoat\n";
    cout << "=================\n";
}

void inputAccountData(CustomerAccount &account) {
    cout << "Nhap ten: ";
    getline(cin, account.name);

    cout << "Nhap dia chi: ";
    getline(cin, account.address);

    cout << "Nhap thanh pho, tieu bang va zip: ";
    getline(cin, account.cityStateZip);

    cout << "Nhap so dien thoai: ";
    getline(cin, account.phoneNumber);

    do {
        cout << "Nhap so du tai khoan: ";
        cin >> account.accountBalance;
    } while (account.accountBalance < 0);

    cin.ignore(); // Clear the input buffer
    cout << "Nhap ngay thanh toan cuoi cung: ";
    getline(cin, account.lastPaymentDate);
}

void displayAllAccounts() {
    cout << "\n===== THONG TIN TAI KHOAN =====\n";
    for (int i = 0; i < numAccounts; ++i) {
        cout << "Ten: " << accounts[i].name << endl;
        cout << "Dia chi: " << accounts[i].address << endl;
        cout << "Thanh pho, tieu bang va zip: " << accounts[i].cityStateZip << endl;
        cout << "So dien thoai: " << accounts[i].phoneNumber << endl;
        cout << "So du tai khoan: " << accounts[i].accountBalance << endl;
        cout << "Ngay thanh toan cuoi cung: " << accounts[i].lastPaymentDate << endl;
        cout << "---------------------------------\n";
    }
}

void editAccountData() {
    string searchName;
    cout << "Nhap ten tai khoan can chinh sua: ";
    cin.ignore();
    getline(cin, searchName);

    bool found = false;
    for (int i = 0; i < numAccounts; ++i) {
        if (accounts[i].name == searchName) {
            inputAccountData(accounts[i]); // Chỉnh sửa thông tin tài khoản
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Khong tim thay tai khoan ten '" << searchName << "'." << endl;
    }
}

void searchAccountByName()
{
    string searchName;
    cout <<" Nhap ten tai khoan can tim: ";
    cin.ignore();
    getline(cin, searchName);

    bool found = false;
    for (int i = 0; i < numAccounts; i++)
    {
        if (accounts[i].name == searchName)
        {
            cout <<" \n====== THONG TIN TAI KHOAN MOI =======\n";
            cout << " Ten: " << accounts[i].name << endl;
            cout <<" Dia chi: " << accounts[i].address << endl;
            cout <<" Thanh pho, tieu bang va zip: " << accounts[i].cityStateZip << endl;
            cout <<" So dien thoai: " << accounts[i].phoneNumber << endl;
            cout <<" So du tai khoan: " << accounts[i].accountBalance << endl;
            cout <<" Ngay thanh toan cuoi cung: " << accounts[i].lastPaymentDate << endl;
            cout <<" ---------------------------------------\n";
            found = true; 
        }
    }
    if (!found)
    {
        cout <<" Khong tim thay tai khoan voi ten " << searchName <<" ." << endl;
    }
}

int main() {
    int choice;

    do {
        displayMenu();
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (numAccounts < MAX_ACCOUNTS) {
                    inputAccountData(accounts[numAccounts]);
                    numAccounts++;
                } else {
                    cout << "Danh sach tai khoan da day. Khong the them moi." << endl;
                }
                break;
            case 2:
                displayAllAccounts();
                break;
            case 3:
                editAccountData();
                break;
            case 4:
                cout << "Chuong trinh ket thuc.\n";
                break;
            default:
                cout << "Lua chon khong hop le. Vui long nhap lai.\n";
        }

    } while (choice != 4);

    return 0;
}
