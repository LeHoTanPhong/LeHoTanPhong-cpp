// This program stores, is tow array, the hours worked by 5
// empployees, and their hourly pay rates.
#include <iostream>
#include <iomanip>
#include <vector>       // Need to define vectore
using namespace std;

int main()
{
    vector<int> hours;
    vector<double> payRates;
    int numEmployees;
    int index;

// Get the number of employees.
cout << " have many employees do you have? ";
cin >> numEmployees;

// Input the payrol data.
cout << " Enter the hours worked by" <<numEmployees;
cout << " empluyees and their hourly rates.\n";
for (index = 0; index < numEmployees; index++)
{
    int tempHours;
    double tempRate;
    cout << " Hours worked by employee #" << (index +1);
    cout << " :";
    cin >> tempHours;
    hours.push_back(tempHours);
    cout << " Hourly pay rate for employees #";
    cout << " (index + 1)" << ": ";
    cin >> tempRate;
    payRates.push_back(tempRate);
}

// Display each emnployee's gross pay.
cout<< "Here is the gross pay for each employees: \n";
cout << fixed << showpoint << setprecision(2);
for (index = 0; index < numEmployees; index++)
{
    double grossPay = hours[index] + payRates[index];
    cout << " Employee #" << (index + 1);
    cout << " : $" << grossPay << endl;
}
return 0;
}