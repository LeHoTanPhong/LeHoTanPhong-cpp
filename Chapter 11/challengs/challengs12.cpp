#include <iostream>
#include <string>

using namespace std;

// Structure to store student data
struct Student {
    string name;
    int id;
    double* tests;   // Pointer to an array of test scores
    double average;  // Average test score
    char grade;      // Course grade
};

// Function to input data for each student
void inputStudentData(Student& student, int numTests) {
    cout << "Enter student name: ";
    getline(cin, student.name);

    cout << "Enter student ID: ";
    cin >> student.id;

    student.tests = new double[numTests]; // Dynamically allocate an array for test scores

    cout << "Enter test scores for student #" << student.id << ":\n";
    for (int i = 0; i < numTests; ++i) {
        do {
            cout << "Test #" << (i + 1) << ": ";
            cin >> student.tests[i];
        } while (student.tests[i] < 0); // Input validation: Do not accept negative test scores
    }

    // Calculate average test score
    double sum = 0.0;
    for (int i = 0; i < numTests; ++i) {
        sum += student.tests[i];
    }
    student.average = sum / numTests;

    // Calculate course grade based on the grading scale
    if (student.average >= 91) student.grade = 'A';
    else if (student.average >= 81) student.grade = 'B';
    else if (student.average >= 71) student.grade = 'C';
    else if (student.average >= 61) student.grade = 'D';
    else student.grade = 'F';
}

// Function to display the student data
void displayStudentData(const Student& student) {
    cout << student.name << "\t\t" << student.id << "\t\t" << student.average << "\t\t" << student.grade << endl;
}

// Function to deallocate memory for each student
void deleteStudentData(Student* students, int numStudents) {
    for (int i = 0; i < numStudents; ++i) {
        delete[] students[i].tests; // Deallocate the array for test scores
    }
    delete[] students; // Deallocate the array of structures
}

int main() {
    int numStudents, numTests;

    cout << "Enter the number of test scores: ";
    cin >> numTests;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    cin.ignore(); // Clear the newline character from the buffer

    // Dynamically allocate an array of structures
    Student* students = new Student[numStudents];

    // Input data for each student
    for (int i = 0; i < numStudents; ++i) {
        inputStudentData(students[i], numTests);
    }

    // Display table header
    cout << "\nName\t\tID\t\tAverage\t\tGrade\n";
    cout << "--------------------------------------------\n";

    // Display data for each student
    for (int i = 0; i < numStudents; ++i) {
        displayStudentData(students[i]);
    }

    // Deallocate memory
    deleteStudentData(students, numStudents);

    return 0;
}
