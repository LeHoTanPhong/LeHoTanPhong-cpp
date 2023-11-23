#include <iostream>
#include <fstream>
using namespace std;

void decodeFile ( const char* inputFileName, const char* outputFileName, int key)
{
    // Mở tệp để đọc
    ifstream inFile (inputFileName, ios::binary);

    // Kiểm tra xem tệp có mở thành công không 
    if (!inFile)
    {
        cout<< " Khong the mo tep de doc.\n";
        return;
    }

    // Mở tệp đê ghi
    ofstream outFile (outputFileName, ios::binary);

    if (outFile)
    {
        cout <<" Khong the mo tep ghi.\n";
        inFile.close();
        return;
    }

    char ch;
    while (inFile.get(ch))
    {
        ch-= key;

        outFile.put(ch);
    }

    inFile.close();
    outFile.close();
}

int main()
{
    const char* inputFileName = "encodedFile.txt";
    const char* outputFileName = "decodedFile.txt";
    const int key = 10;

    decodeFile (inputFileName, outputFileName, key);
    cout <<" File da duoc giai ma.\n";

    return 0;
}