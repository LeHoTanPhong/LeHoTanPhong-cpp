#include <iostream>
using namespace std;

int main()
{
    // Nhap buoc song.
    double buocSong;
    cout <<" Nhap buoc song dien tu ( Duoc tinh bang met): ";
    cin >> buocSong;

    if( buocSong < 1e-12)
    {
        cout << " Song nay la song gaamma. " << endl;
    }
    else if( buocSong < 1e-10)
    {
        cout <<" SOng nay la tia X " << endl;
    }
    else if( buocSong < 3e-8)
    {
        cout<<" Song nay la tia cuc tim " << endl;
    }
    else if( buocSong < 700e-9)
    {
        cout <<" Song nay la anh sang nhin thay duoc" << endl;
    }
    else if(buocSong < 1e-6)
    {
        cout <<" SOng nay la anh sang hong ngoai " << endl;
    }
    else if( buocSong < 1e-2)
    {
        cout <<" Song nay la song vi ba" << endl;
    }
    else 
    {
        cout <<" Song nay la song vo tuyen " << endl;
    }
    return 0;
}