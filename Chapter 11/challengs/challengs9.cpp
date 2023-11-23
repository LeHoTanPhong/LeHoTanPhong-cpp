#include <iostream>
#include <string>

using namespace std;

struct Speaker {
    string name;
    string phoneNumber;
    string speechTopic;
    double speakingFee;
};

const int MAX_SPEAKERS = 10;
Speaker speakers[MAX_SPEAKERS];
int numSpeakers = 0;

void displayMenu() {
    cout << "\n===== MENU =====\n";
    cout << "1. Nhap thong tin dien gia\n";
    cout << "2. Hien thi thong tin dien gia\n";
    cout << "3. Chinh sua thong tin dien gia\n";
    cout << "4. Thoat\n";
    cout << "=================\n";
}

void inputSpeakerData(Speaker &speaker) {
    cout << "Nhap ten dien gia: ";
    getline(cin, speaker.name);

    cout << "Nhap so dien thoai dien gia: ";
    getline(cin, speaker.phoneNumber);

    cout << "Nhap chu de noi dien gia: ";
    getline(cin, speaker.speechTopic);

    do
    {
        cout << "Nhap phi bat buoc dien gia: ";
        cin >> speaker.speakingFee;
    } while (speaker.speakingFee < 0);
}

void displayAllSpeakers() {
    cout << "\n===== THONG TIN DIEN GIA =====\n";
    for (int i = 0; i < numSpeakers; ++i) {
        cout << "Ten: " << speakers[i].name << endl;
        cout << "So dien thoai: " << speakers[i].phoneNumber << endl;
        cout << "Chu de noi: " << speakers[i].speechTopic << endl;
        cout << "Phi bat buoc: " << speakers[i].speakingFee << endl;
        cout << "---------------------------------\n";
    }
}

void editSpeakerData() {
    string searchName;
    cout << "Nhap ten dien gia can chinh sua: ";
    cin.ignore();
    getline(cin, searchName);

    bool found = false;
    for (int i = 0; i < numSpeakers; ++i) {
        if (speakers[i].name == searchName) {
            inputSpeakerData(speakers[i]); // Chỉnh sửa thông tin diễn giả
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Khong tim thay dien gia voi ten '" << searchName << "'." << endl;
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
                if (numSpeakers < MAX_SPEAKERS) {
                    inputSpeakerData(speakers[numSpeakers]);
                    numSpeakers++;
                } else {
                    cout << "Danh sach dien gia da day. Khong the them moi." << endl;
                }
                break;
            case 2:
                displayAllSpeakers();
                break;
            case 3:
                editSpeakerData();
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

