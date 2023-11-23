#include <iostream>
using namespace std;

// Ham tinh khoang cach roi cua mot vat the.
double FallingDistance( int time)
{
    double distance;

    distance = 0.5 * 9.8 * time * time;

    return distance;
}

int main()
{
    int time;

    for( time =1; time <= 10; time++)
    {
        double distance = FallingDistance(time);

        cout <<" Khoang cach roi trong " << time << " giay la " << distance <<" m" << endl;
    }
    return 0;
}