#include <iostream>

using namespace std;

struct WeatherData {
    double rainfall;
    double highTemp;
    double lowTemp;
    double avgTemp;
};

int main() {
    WeatherData months[12];

    for (int i = 0; i < 12; i++) {
        cout << "Enter the month: ";
        string monthName;
        cin >> monthName;

        cout << "Enter the total rainfall for " << monthName << ": ";
        double rainfall;
        cin >> rainfall;

        cout << "Enter the highest temperature for " << monthName << ": ";
        double highTemp;
        cin >> highTemp;

        while (highTemp < -100 || highTemp > 140) {
            cout << "Invalid temperature. Please enter a temperature between -100 and 140 degrees Fahrenheit: ";
            cin >> highTemp;
        }

        cout << "Enter the lowest temperature for " << monthName << ": ";
        double lowTemp;
        cin >> lowTemp;

        while (lowTemp < -100 || lowTemp > 140) {
            cout << "Invalid temperature. Please enter a temperature between -100 and 140 degrees Fahrenheit: ";
            cin >> lowTemp;
        }

        months[i].rainfall = rainfall;
        months[i].highTemp = highTemp;
        months[i].lowTemp = lowTemp;
        months[i].avgTemp = (highTemp + lowTemp) / 2;
    }

    // Calculate average monthly rainfall
    double totalRainfall = 0;
    for (int i = 0; i < 12; i++) {
        totalRainfall += months[i].rainfall;
    }
    double avgMonthlyRainfall = totalRainfall / 12;

    // Calculate total rainfall for the year
    cout << "Total rainfall for the year: " << totalRainfall << endl;

    // Find the highest and lowest temperatures for the year (and the months they occurred in)
    int monthOfHighestTemp = 0;
    int monthOfLowestTemp = 0;
    double maxTemp = months[0].highTemp;
    double minTemp = months[0].lowTemp;

    for (int i = 1; i < 12; i++) {
        if (months[i].highTemp > maxTemp) {
            maxTemp = months[i].highTemp;
            monthOfHighestTemp = i;
        }

        if (months[i].lowTemp < minTemp) {
            minTemp = months[i].lowTemp;
            monthOfLowestTemp = i;
        }
    }

    string monthsStr[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    cout << "Highest temperature: " << maxTemp << " degrees Fahrenheit in " << monthsStr[monthOfHighestTemp] << endl;
    cout << "Lowest temperature: " << minTemp << " degrees Fahrenheit in " << monthsStr[monthOfLowestTemp] << endl;

    // Calculate the average of all the monthly average temperatures
    double totalAvgTemp = 0;
    for (int i = 0; i < 12; i++) {
        totalAvgTemp += months[i].avgTemp;
    }
    double avgAllAvgTem = totalAvgTemp / 12;

    cout << "Average of all the monthly average temperatures: " << avgAllAvgTem << " degrees Fahrenheit" << endl;

    return 0;
}
