#include <iostream>
#include <string>
using namespace std;


int main()
{
    string input;

    cout <<" Nhap chuoi: ";
    getline(cin, input);

    int sum = 0;

    int max_digit =0;
    int min_digit = 10;

    for (char c : input)
    {
        if(isdigit(c) && c - '0' < 10)
        {
            sum += c -'0';

            if( c - '0' > max_digit)
            {
                max_digit = c - '0';
            }

            if(c - '0' < min_digit)
            {
                min_digit = c - '0';
            }
        }
    }

    cout <<" Tong cac chu so trong chuoi la: " << sum << endl;

    cout <<" Chu so cao nhat trong chu la: " << max_digit << endl;

    cout <<" Chu so nho nhat trong chuoi la:" << min_digit << endl;

    return 0;
}