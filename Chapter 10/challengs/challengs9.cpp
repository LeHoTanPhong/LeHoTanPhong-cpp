#include <iostream>
using namespace std;

char find_most_frequent_character ( const char *str);

int main()
{
    char str[] = "Hello world";

    char most_frequent_character = find_most_frequent_character (str);

    cout <<" Ky tu xuat hen nhieu nhat trong chuoi la: " << most_frequent_character << endl;

    return 0;
}