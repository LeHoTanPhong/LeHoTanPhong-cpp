#include <iostream>
using namespace std;

int count_vowels(char *str);
int count_consonants(char *str);

int main()
{
    char str[100];
    int choice;

    // Nhap chuoi tu nguoi dung
    cout <<" Nhap chuoi: ";
    cin.getline(str, 100);

    do
    {
        cout << endl;
        cout <<" A) Dem so nguyen am trong chuoi" << endl;
        cout <<" B) Dem so phu am trong chuoi" << endl;
        cout <<" C) Dem ca nguyen am va phu am trong chuoi" << endl;
        cout <<" D) Nhap mot chuoi khac" << endl;
        cout <<" E) Thoat khoi chuong trinh" << endl;
        cout <<" Lua chon cua ban: ";
        cin >> choice;

        switch (choice)
        {
        case 'A': cout <<" So nguyen am trong chuoi la: " << count_vowels(str) << endl;
             break;
        case 'B': cout <<" So phu am trong chuoi la: " << count_consonants(str) << endl;
            break;
        case 'C': cout <<" So nguyen am va so phu am trong chuoi la: " << count_vowels(str) + count_consonants(str) << endl;
            break;
        case 'D': cout <<" Nhap chuoi";
                 cin.getline(str, 100);
                 break;
        case 'E':
         return 0;
        default: cout <<" Lua chon khong hop le!" << endl;
                break; 
        }
    }
    while (choice != 'E');
    return 0;
}