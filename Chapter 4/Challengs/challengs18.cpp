#include <iostream>
using namespace std;

int main()
{
    // Nhập số calo và khối lượng chất béo.
    int calo;
    double gramChatbeo;
    cout <<" Nhap so calo trong thuc pham:";
    cin >> calo;
    cout <<" Nhap so gam chat beo trong thuc pham: ";
    cin >> gramChatbeo;

    if( calo <= 0)
    {
        cout<<" So luong calo duoc nhap khong chinh xac. Vui long nhap lai:";
        cin >> calo;
    }
    if(gramChatbeo <= 0)
    {
        cout<<" So gram chat beo khong chinh xac. Vui long nhap lai:";
        cin >> gramChatbeo;
    }
    if(gramChatbeo * 9 > calo)
    {
        cout <<" So gram chat beo khong chinh xac. Vui long nhap lai: ";
        cin >> gramChatbeo;
    }

    // Tinh.
    double caloChabeo = gramChatbeo * 9;

    double tyleChatbeo = (caloChabeo / calo) *100;

    // Hiên thị kết quả.
    cout <<" Luong calo tu chat beo la: " << caloChabeo << " calo" << endl;
    cout <<" Pham tram calo tu chat beo la: " << tyleChatbeo << " %" << endl;
    return 0; 
}