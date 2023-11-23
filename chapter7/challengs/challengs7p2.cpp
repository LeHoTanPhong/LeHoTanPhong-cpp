#include <iostream>
using namespace std;

const int NUM_MONTHS = 12;

int main() {
  double rainfall[NUM_MONTHS];
  double totalRainfall = 0.0;
  double averageRainfall = 0.0;
  double highestRainfall = 0.0;
  int highestRainfallMonth = 0;
  double lowestRainfall = 0.0;
  int lowestRainfallMonth = 0;

  // Get the total rainfall for each month from the user.
  for (int i = 0; i < NUM_MONTHS; i++) {
    double rainfallAmount;
    cout << "Enter the total rainfall for month " << i + 1 << ": ";
    cin >> rainfallAmount;

    // Validate the input to prevent negative numbers.
    while (rainfallAmount < 0.0) {
      cout << "Invalid input. Rainfall cannot be negative. Please enter a valid amount: ";
      cin >> rainfallAmount;
    }

    rainfall[i] = rainfallAmount;
    totalRainfall += rainfallAmount;
  }

  // Calculate the average monthly rainfall.
  averageRainfall = totalRainfall / NUM_MONTHS;

  // Find the month with the highest rainfall.
  for (int i = 0; i < NUM_MONTHS; i++) {
    if (rainfall[i] > highestRainfall) {
      highestRainfall = rainfall[i];
      highestRainfallMonth = i;
    }
  }

  // Find the month with the lowest rainfall.
  for (int i = 0; i < NUM_MONTHS; i++) {
    if (rainfall[i] < lowestRainfall) {
      lowestRainfall = rainfall[i];
      lowestRainfallMonth = i;
    }
  }

  // Display the results.
  cout << "Total rainfall for the year: " << totalRainfall << endl;
  cout << "Average monthly rainfall: " << averageRainfall << endl;
  cout << "Month with the highest rainfall: " << highestRainfallMonth + 1 << " (rainfall: " << highestRainfall << ")" << endl;
  cout << "Month with the lowest rainfall: " << lowestRainfallMonth + 1 << " (rainfall: " << lowestRainfall << ")" << endl;

  return 0;
}