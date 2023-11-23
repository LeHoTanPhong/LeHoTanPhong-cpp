#include <iostream>
#include <string>
using namespace std;

const int NUM_SALSA_TYPES = 5;

int main() {
  // Arrays to store the salsa names and sales data.
  string salsaNames[] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
  int salsaSales[NUM_SALSA_TYPES];

  // Prompt the user to enter the number of jars sold for each type of salsa.
  for (int i = 0; i < NUM_SALSA_TYPES; i++) {
    int salesAmount;
    cout << "Enter the number of jars sold of " << salsaNames[i] << " salsa: ";
    cin >> salesAmount;

    // Validate the input to prevent negative values.
    while (salesAmount < 0) {
      cout << "Invalid input. Number of jars sold cannot be negative. Please enter a valid amount: ";
      cin >> salesAmount;
    }

    salsaSales[i] = salesAmount;
  }

  // Calculate the total sales.
  int totalSales = 0;
  for (int i = 0; i < NUM_SALSA_TYPES; i++) {
    totalSales += salsaSales[i];
  }

  // Find the highest selling and lowest selling salsa types.
  int highestSalesIndex = 0;
  int lowestSalesIndex = 0;
  for (int i = 0; i < NUM_SALSA_TYPES; i++) {
    if (salsaSales[i] > salsaSales[highestSalesIndex]) {
      highestSalesIndex = i;
    }

    if (salsaSales[i] < salsaSales[lowestSalesIndex]) {
      lowestSalesIndex = i;
    }
  }

  // Display the sales report.
  cout << endl << endl << "Salsa Sales Report" << endl << endl;
  cout << "Salsa Type | Sales" << endl;
  cout << "-----------|-------" << endl;
  for (int i = 0; i < NUM_SALSA_TYPES; i++) {
    cout << salsaNames[i] << " | " << salsaSales[i] << endl;
  }
  cout << "-----------|-------" << endl;
  cout << "Total Sales: " << totalSales << endl;
  cout << "Highest Selling Salsa: " << salsaNames[highestSalesIndex] << endl;
  cout << "Lowest Selling Salsa: " << salsaNames[lowestSalesIndex] << endl;

  return 0;
}