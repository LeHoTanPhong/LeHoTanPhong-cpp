#include <iostream>
using namespace std;

class MayLyTam {
private:
    int luongXang;
    double congSuat;
    double thoiGian;
public:
    void nhap() {
        cout << "Nhap thoi gian hoat dong: ";
        cin >> thoiGian;
        cout << "Nhap Luong xang: ";
        cin >> luongXang;
        cout << "Nhap cong suat loc cua may: ";
        cin >> congSuat;
    }
    void setTgian(double t)
    {
        thoiGian=t;
    }
    double getThoiGian()
    {
        return this ->thoiGian;
    }


    static long long DON_GIA_THUE_MayLyTam;

    float tinhLuongNuoc() {
        return this->getThoiGian() * congSuat;
    }
    long tinhChoPhiThueMoiMay() {
        return DON_GIA_THUE_MayLyTam * this->getThoiGian();
    }

    long tinhChiPhi() {
        return tinhChoPhiThueMoiMay() + luongXang * 20000;
    }
};

class MayXucTac {
private:
    int luongHoachat;
    double congSuat;
    double thoiGian;
public:
    void nhap() {
        double thoiGian = 0;
        cout << "Nhap thoi gian hoat dong: ";
        cin >> thoiGian;
        cout << "Nhap Luong hoa chat: ";
        cin >> luongHoachat;
        cout << "Nhap cong suat loc cua may: ";
        cin >> congSuat;
    }
    void setTgian(double t)
    {
        thoiGian=t;
    }
    double getThoiGian()
    {
        return this ->thoiGian;
    }
 
    float CongSuatThucTe() {
        if (this->getThoiGian() >= 10) {
            return congSuat * (luongHoachat / 100) / (this->getThoiGian() / 10);
        } else {
            return congSuat * (luongHoachat / 100);
        }
    }

    static long long DON_GIA_THUE_MayXucTac;
    long tinhChiPhiThueMoiMay() {
        return DON_GIA_THUE_MayXucTac* this->getThoiGian();
    }

    float tinhLuongNuoc() {
        return this->getThoiGian() * CongSuatThucTe();
    }

    long tinhChiPhi() {
        return tinhChiPhiThueMoiMay() + luongHoachat * 10000;
    }
};

long long MayLyTam::DON_GIA_THUE_MayLyTam = 50000;
long long MayXucTac::DON_GIA_THUE_MayXucTac = 80000;

int main() {
    int m,n;
    double nuoc; 
    cout << " Nhap vao luong nuoc trong ao ";
    cin >> nuoc;
    cout <<"Nhap so luong may xuc tac";
    cin >> m;
    cout <<"Nhap so luong may ly tam";
    cin >> n;
    long long chiphixuctac = 0;
    long luong_nuoc_xuc_tac = 0;
    long long chiphilytam = 0;
    long luong_nuoc_ly_tam = 0;

   for(int i=1 ; i<=m ; i++)
   {
    MayXucTac a;
    a.nhap();
    chiphixuctac=chiphixuctac + a.tinhChiPhi();               // chiphixuctac+=a.tinhChiPhi();
    luong_nuoc_xuc_tac = luong_nuoc_xuc_tac + a.tinhLuongNuoc();

   }
   for (int i = 1; i <=m; i++)
   {
    MayLyTam b;
    b. nhap();
    chiphilytam = chiphilytam  + b.tinhChiPhi();
    luong_nuoc_ly_tam = luong_nuoc_ly_tam + b.tinhLuongNuoc();
   }
   long long tongchiphi=chiphilytam + chiphixuctac;
   long long tongluongnuoc = luong_nuoc_ly_tam + luong_nuoc_xuc_tac;
   if (tongluongnuoc >= nuoc)
   {
    cout << " Ao duoc loc het "<< endl;
   }
   else 
   {
    cout << "Ao chua duoc loc het" << endl;
   }
   cout << " Tong chi phi la: " << tongchiphi;
    return 0;
}
