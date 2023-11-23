#include <iostream>
using namespace std;

int main()
{
    int gallon = 20;

    double tocDotrongThitran= 23.5;

    double tocDotrongCaotoc = 28.9;

    // kHoang cach trong thi tran.
    double khoangCach1 = gallon * tocDotrongThitran;

    // Khoang cach trong cao toc.
    double khoangCach2 = gallon * tocDotrongCaotoc;

    cout << " Khoang cach trong thi tran la: " << khoangCach1 << "m " << endl;
    cout << " Khoang cach trong cao toc la: " << khoangCach2 << "m " << endl;
    return 0;
}