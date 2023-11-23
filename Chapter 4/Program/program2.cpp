// This program averages three test scores
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int HIGH_SCORE = 95;
    int score1, score2, score3;
    double average;

    // Get the three test scores.
    cout << " Enter 3 test scores and I will average the: ";
    cin >> score1 >> score2 >>score3;

    // Calculate and display the average score.
    average = ( score1 + score2 + score3 ) / 3.0;
    cout << fixed << showpoint << setprecision(1);
    cout << " You average is " << average << endl;

    // If the average is a high score, congarutulate the user.
    if( average > HIGH_SCORE)
     cout << " Congratulations! That's high score!\n";
    return 0;
}