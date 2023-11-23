#include <iostream>
#include <string>
using namespace std;

void display_string_backward( const char *str);

int main()
{

    char str[100];
    
    cout << " Nhap mot chuoi: ";
    cin >> str;

    display_string_backward(str);
    return 0;
}