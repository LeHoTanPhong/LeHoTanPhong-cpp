#include <iostream>
using namespace std;

int main()
{
    string tenPhim;
    int soLuongveNguoilon;
    int soLuongveTreem;
    float giaVenguoiLon= 10.0;
    float giaVeTreem = 6.0;
    float luongNhaptuan = 0.6;
    float luongThuangon =0;
    float tienNhaphanPhoi = 0;

    cout << " Nhap ten phim ";
    cin >> tenPhim;

    cout << " Nhap so luong ve nguoi lon:\n ";
    cin >> soLuongveNguoilon;

    cout << " Nhap so luong ve tr em: ";
    cin >> soLuongveTreem;

    luongNhaptuan = soLuongveNguoilon * giaVenguoiLon + soLuongveTreem * giaVeTreem;

    luongThuangon = luongNhaptuan * luongNhaptuan;

    tienNhaphanPhoi = luongNhaptuan - luongThuangon;

    cout <<" Ten phim: " << tenPhim << endl;
    cout << " ve nguoi lon da ban:" << soLuongveNguoilon <<endl;
    cout << " ve tre em da ban:" << soLuongveTreem << endl;
    cout << " loi nhuan gop phong: " << luongNhaptuan << "$" <<endl;
    cout << " loi nhua phong ve: " << luongThuangon << "$ " << endl;
    cout << " so tien tra cho nha phan phoi: " << tienNhaphanPhoi << "$ "  << endl;
    return 0;
}