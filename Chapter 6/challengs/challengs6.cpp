#include <iostream>
using namespace std;

// Ham tinh dong nang cua mot vat the.
double KineticEnergy( double mass, double velocity)
{
    double kineticEnergy;

    kineticEnergy = 0.5 * mass * velocity * velocity;

    return kineticEnergy;
}

int main()
{
    double mass, velocity;

    cout <<" Nhap khoi luong cua vat (kg): ";
    cin >> mass;

    cout <<" Nhap van toc cua vat (m/s): ";
    cin >> velocity;

    double kineticEnergy = KineticEnergy(mass, velocity);

    cout <<" Dong nang cua vat la: " << kineticEnergy <<" Joule" << endl;
    return 0;
}