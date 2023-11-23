#include <iostream>
#include <algorithm>

using namespace std;

struct Student {
  string name;
  int score;
};

bool compare_students(const Student& s1, const Student& s2) {
  return s1.score < s2.score;
}

int main() {
  // Get the number of students from the user.
  int n;
  cout << "Enter the number of students: ";
  cin >> n;

  // Dynamically allocate arrays to store the student names and scores.
  Student* students = new Student[n];

  // Get the name and score for each student.
  for (int i = 0; i < n; i++) {
    cout << "Enter student #" << i + 1 << "'s name: ";
    cin >> students[i].name;
    cout << "Enter student #" << i + 1 << "'s score: ";
    cin >> students[i].score;
  }

  // Sort the student names and scores together.
  sort(students, students + n, compare_students);

  // Display the sorted list of student names and scores.
  cout << "Sorted list of student names and scores:" << endl;
  for (int i = 0; i < n; i++) {
    cout << students[i].name << ": " << students[i].score << endl;
  }

  // Deallocate the arrays of student names and scores.
  delete[] students;

  return 0;
}