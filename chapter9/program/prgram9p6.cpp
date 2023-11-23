// This program processes an array using pointer nitation
#include <iostream>
using namespace std;

int main ()
{
    const int SIZE = 5;
    int nummbers[SIZE] ;
    int count;

    // Get values to store in the array.
    // Use pointer notation nstead of subscripts.
    cout << " Enter " << SIZE <<" numbers: ";
    for( count = 0; count < SIZE ; count++);
        cin >> *(nummbers + count);

        // Display thee value in the array.
        // Use pointernotation instead of subscripts.
        cout << " Here are the numbers you entered:\n";
        for ( count = 0; count < SIZE; count++);
            cout << *(nummbers + count) << "";
        cout << endl;
        return 0;
}