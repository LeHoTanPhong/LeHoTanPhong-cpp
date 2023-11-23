#include <iostream>
#include <iomanip> // Để sử dụng setw()

using namespace std;

const int NUM_STUDENTS = 5;
const int NUM_TESTS = 4;

// Hàm để chuyển điểm số thành chữ cái
char convertToLetterGrade(double average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    string studentNames[NUM_STUDENTS];
    char letterGrades[NUM_STUDENTS];
    double testScores[NUM_STUDENTS][NUM_TESTS];

    // Nhập thông tin học sinh và điểm kiểm tra
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        cout << "Nhap ten hoc sinh " << i + 1 << ": ";
        cin >> studentNames[i];

        double totalScore = 0;

        for (int j = 0; j < NUM_TESTS; ++j) {
            do {
                cout << "Nhap diem kiem tra " << j + 1 << " cho hoc sinh " << studentNames[i] << ": ";
                cin >> testScores[i][j];

                if (testScores[i][j] < 0 || testScores[i][j] > 100) {
                    cout << "Diem khong hop le. Vui long nhap lai." << endl;
                }
            } while (testScores[i][j] < 0 || testScores[i][j] > 100);

            totalScore += testScores[i][j];
        }

        // Tính điểm trung bình và xếp loại chữ cái
        double averageScore = totalScore / NUM_TESTS;
        letterGrades[i] = convertToLetterGrade(averageScore);
    }

    // Hiển thị bảng điểm
    cout << "\nBang Diem" << endl;
    cout << setw(15) << "Hoc Sinh" << setw(15) << "Diem trung binh" << setw(15) << "Xep loai" << endl;

    for (int i = 0; i < NUM_STUDENTS; ++i) {
        cout << setw(15) << studentNames[i] << setw(15) << fixed << setprecision(2) << testScores[i][0] << setw(15) << letterGrades[i] << endl;
    }

    return 0;
}
