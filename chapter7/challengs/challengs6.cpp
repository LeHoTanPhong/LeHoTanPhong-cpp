#include <iostream>
#include <fstream>
using namespace std;

const int MONTHS = 3;
const int DAYS_PER_MONTH = 30;

void readWeatherData(char weatherData[MONTHS][DAYS_PER_MONTH], const char* fileName) {
    ifstream inputFile(fileName);
    
    if (!inputFile) {
        std::cerr << "Cannot open file: " << fileName << endl;
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < MONTHS; ++i) {
        for (int j = 0; j < DAYS_PER_MONTH; ++j) {
            inputFile >> weatherData[i][j];
        }
    }

    inputFile.close();
}

void displayWeatherReport(const char weatherData[MONTHS][DAYS_PER_MONTH]) {
    int rainyDays = 0, cloudyDays = 0, sunnyDays = 0;
    int maxRainyDays = 0, maxRainyMonth = 0;

    for (int i = 0; i < MONTHS; ++i) {
        int monthlyRainyDays = 0;

        for (int j = 0; j < DAYS_PER_MONTH; ++j) {
            if (weatherData[i][j] == 'R') {
                ++rainyDays;
                ++monthlyRainyDays;
            } else if (weatherData[i][j] == 'C') {
                ++cloudyDays;
            } else if (weatherData[i][j] == 'S') {
                ++sunnyDays;
            }
        }

        if (monthlyRainyDays > maxRainyDays) {
            maxRainyDays = monthlyRainyDays;
            maxRainyMonth = i;
        }
    }

    cout << "Weather Report:\n";
    cout << "Total Rainy Days: " << rainyDays << "\n";
    cout << "Total Cloudy Days: " << cloudyDays << "\n";
    cout << "Total Sunny Days: " << sunnyDays << "\n";
    cout << "Month with the most rainy days: " << maxRainyMonth + 6 << "\n";
}

int main() {
    char weatherData[MONTHS][DAYS_PER_MONTH];

    readWeatherData(weatherData, "RainOrShine.txt");
    displayWeatherReport(weatherData);

    return 0;
}
