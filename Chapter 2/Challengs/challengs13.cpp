#include <iostream>
using namespace std;

int main()
{
    // Gia goc bang mach
    double giaGoc = 14.95;

    // Lai suat 
    double lai = 0.35;

    // Gia ban
    double giaBan = giaGoc * (1 + lai);

    cout << " Gia bang cua bang mach la: " << giaBan <<" $"<< endl;
    return 0;
}