#include <iostream>
using namespace std;

int main() {
  int arr[10];

  // Get input from the user
  cout << "Enter 10 values into the array: ";
  for (int i = 0; i < 10; i++) {
    cin >> arr[i];
  }

  // Initialize the largest and smallest values
  int largest = arr[0];
  int smallest = arr[0];

  // Iterate over the array and find the largest and smallest values
  for (int i = 1; i < 10; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }

    if (arr[i] < smallest) {
      smallest = arr[i];
    }
  }

  // Display the largest and smallest values
  cout << "The largest value is: " << largest << endl;
  cout << "The smallest value is: " << smallest << endl;

  return 0;
}