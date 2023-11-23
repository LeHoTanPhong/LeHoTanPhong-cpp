#include <iostream>
using namespace std;

struct Player
{
    string name;
    int number;
    int points;
};

int main()
{
    Player players[12];

    // Nhap du lieu cau thu
    for ( int i = 0; i < 12; i++)
    {
        cout <<" Nhap ten cau thu thu" << i + 1 <<": ";
        cin >> players[i].name;

        cout <<" Nhap so cau thu thu" << i + 1 << ": ";
        cin >> players[i].number;

        cout <<" Nhap so diem cua cau thu thu" << i + 1 << ": ";
        cin >> players[i].points;

        // Xac thuc dau vao
        while (players[i].number < 1 || players[i].number > 12)
        {
            cout <<" So cua cau thu phai nam trong khoang tu 1 den 12. Vui long nhap lai: ";
            cin >> players[i].number;
        } 

        while (players[i].points < 0)
        {
            cout <<" So diem cua cau thu phai lon hon khong. Vui long nhap lai: ";
            cin >> players[i].points;
        }
    }

    // Hien thi bang
    cout <<" \n| So | Ten | Diem |" << endl;
    for ( int i =0; i < 12; i++)
    {
        cout <<"| " << players[i].number << " | " << players[i].name << " | " << players[i].points << " | " << endl;
    }

    // Tinh toan
    int total_point = 0;
    for ( int i = 0; i < 12; i++)
    {
        total_point += players[i].points;
    }
    cout <<" \nTong so diem cua doi la" << total_point <<endl;

    Player highest_scorer;
    highest_scorer.points = 0;
    for ( int i =0; i < 12; i++)
    {
        if ( players[i].points < highest_scorer.points)
        {
            highest_scorer = players[i];
        }
    }

    cout <<" \nCau thu ghi ban duoc nhieu diem nhat la: " << highest_scorer.name << " ,so: " << highest_scorer.number <<" ,so diem: " << highest_scorer.points << endl;

    return 0; 
}