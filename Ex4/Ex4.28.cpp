/* 
    Exercise 4.28: Write a program to print the size of each of the built-in types.
*/

#include<iostream>

using namespace std;

int main() {
    cout << "bool:\t\t " << sizeof(bool) << " bytes.\n";
    cout << "char:\t\t " << sizeof(char) << " bytes.\n";
    cout << "wchar_t:\t " << sizeof(wchar_t) << " bytes.\n";
    cout << "char16_t:\t " << sizeof(char16_t) << " bytes.\n";
    cout << "char32_t:\t " << sizeof(char32_t) << " bytes.\n";
    cout << "short:\t\t " << sizeof(short) << " bytes.\n";
    cout << "int:\t\t " << sizeof(int) << " bytes.\n";
    cout << "long:\t\t " << sizeof(long) << " bytes.\n";
    cout << "long long:\t " << sizeof(long long) << " bytes.\n";
    cout << "float:\t\t " << sizeof(float) << " bytes.\n";
    cout << "double:\t\t " << sizeof(double) << " bytes.\n";
    cout << "long double:\t " << sizeof(long double) << " bytes.\n";

    return 0;
}
