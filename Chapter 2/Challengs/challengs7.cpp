#include <iostream>
using namespace std;

int main()
{
    double mucNuoctang = 1.5;

    // Muc nuoc tang trong 5 nam.
    double mucNuoctangLen5nam = mucNuoctang *5; 

    // Muc nuoc tang len trong 7 nam.
    double mucNuoctangLen7nam = mucNuoctang*7;
    
    // Muc nuoc tang len trong 10 nam.
    double mucNuoctangLen10nam = mucNuoctang* 10;

    cout <<" Muc nuoc tang len sau 5 nam: " << mucNuoctangLen5nam << " mm" << endl;
    cout <<" Muc nuoc tang len sau 7 nam: " << mucNuoctangLen7nam << " mm" << endl;
    cout << " Muc nuoc tang len sau 10 nam: " << mucNuoctangLen10nam << " mm " << endl;
    return 0; 
}