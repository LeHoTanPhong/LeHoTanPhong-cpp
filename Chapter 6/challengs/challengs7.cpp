#include <iostream>
using namespace std;

// Ham chuyen doi nhiet do tu F sang do C.
double Celsius( double fahrenheit)
{
    double celsius;

    celsius = (fahrenheit - 32) * 5/9;
    return celsius;
}

int main()
{
    for ( int fahrenheit = 0; fahrenheit <= 20; fahrenheit++)
    {
        double celsius = Celsius(fahrenheit);
        cout << fahrenheit <<" Do F tuong duong voi" << celsius <<" do C" << endl;
    }
    return 0;
}