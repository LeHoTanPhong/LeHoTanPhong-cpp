#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct SalesData
{
    string region;
    int quarter;
    double revenue;
};

SalesData inputSalesData()
{
    SalesData data;
    cout <<" Nhap ten phan khu: ";
    cin >> data.region;

    do 
    {
        cout <<" Nhap quy (1-4): ";
        cin >> data.quarter;
    }
    while (data.quarter < 1 || data.quarter > 4);

    do 
    {
        cout <<" Nhap doanh thu hang quy: ";
        cin >> data.revenue;
    }
    while (data.revenue < 0);

    return data;
}

void writeSalesDataToFile (const char* fileName, const SalesData& data)
{
    ofstream outFile (fileName, ios::app);

    if (!outFile)
    {
        cout <<" Khong the mo tep ghi.\n";
        return;
    }

    outFile << data.region << ' ' << data.quarter << ' ' << data.revenue <<' \n';
    
    outFile.close();
}

int main()
{
    const char* fileName = " salesData.txt";
    const int numRegion = 4;
    const int numQuarters = 4;

    for (int i =0; i < numRegion; i++)
    {
        for ( int j =0; j < numQuarters; j++)
        {
            SalesData data = inputSalesData();

            writeSalesDataToFile(fileName, data);
        }
    }

    cout <<" Du lieu da duoc ghi vao tep";

    return 0;
}