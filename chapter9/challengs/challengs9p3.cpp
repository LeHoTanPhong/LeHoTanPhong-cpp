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

  // Drop the lowest test score.
  int lowest_score = scores[0];
  for (int i = 1; i < n; i++) {
    if (scores[i] < lowest_score) {
      lowest_score = scores[i];
    }
  }

  // Calculate the average test score without the lowest score.
  double average = 0.0;
  for (int i = 1; i < n; i++) {
    average += scores[i];
  }
  average /= (n - 1);

  // Display the sorted list of test scores and average.
  cout << "Sorted test scores (excluding lowest score):" << endl;
  for (int i = 1; i < n; i++) {
    cout << scores[i] << " ";
  }
  cout << endl;
  cout << "Average test score (excluding lowest score): " << average << endl;

  // Deallocate the array of test scores.
  delete[] scores;

  return 0;
}