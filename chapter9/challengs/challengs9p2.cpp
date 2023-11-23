#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  // Get the number of test scores from the user.
  int n;
  cout << "Enter the number of test scores: ";
  cin >> n;

  // Dynamically allocate an array to store the test scores.
  int* scores = new int[n];

  // Validate the input.
  for (int i = 0; i < n; i++) {
    cout << "Enter test score #" << i + 1 << ": ";
    cin >> scores[i];
    while (scores[i] < 0) {
      cout << "Invalid test score. Please enter a positive number: ";
      cin >> scores[i];
    }
  }

  // Sort the array of test scores in ascending order.
  sort(scores, scores + n);

  // Calculate the average test score.
  double average = 0.0;
  for (int i = 0; i < n; i++) {
    average += scores[i];
  }
  average /= n;

  // Display the sorted list of test scores and average.
  cout << "Sorted test scores:" << endl;
  for (int i = 0; i < n; i++) {
    cout << scores[i] << " ";
  }
  cout << endl;
  cout << "Average test score: " << average << endl;

  // Deallocate the array of test scores.
  delete[] scores;

  return 0;
}