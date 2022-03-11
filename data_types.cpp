#include <iostream>
using namespace std;

int main() {
    cout << "Size of short int: " << sizeof(short int) << " byte" << endl;
    cout << "Size of unsigned short int: " << sizeof(unsigned short int) << " byte" << endl;
    cout << "Size of unsigned int: " << sizeof(unsigned int) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " byte" << endl;
    cout << "Size of long int: " << sizeof(long int) << " byte" << endl;
    cout << "Size of unsigned long int: " << sizeof(unsigned long int) << " byte" << endl;
    cout << "Size of long long int: " << sizeof(long long int) << " byte" << endl;
    cout << "Size of unsigned long long int: " << sizeof(unsigned long long int) << " byte" << endl;
    cout << "Size of signed char: " << sizeof(signed char) << " byte" << endl;
    cout << "Size of unsigned char: " << sizeof(unsigned char) << " byte" << endl;
    cout << "Size of float: " << sizeof(float) << " byte" << endl;
    cout << "Size of double: " << sizeof(double) << " byte" << endl;
    cout << "Size of short int: " << sizeof(short int) << " byte" << endl;
    cout << "Size of long double: " << sizeof(long double) << " byte" << endl;
    cout << "Size of wchar_t: " << sizeof(wchar_t) << " byte" << endl;
    return 0;
}

/*

Primary Data Types:
    Integer (int) - (-2147483648 to 2147483647)
    Character (char) - (-128 to 127) or (0 to 255)
    Boolean (bool)
    Floating Point (float)
    Double Floating Point (double)
    Void (void) - does not return a value
    Wide Character (wchar_t)

Derived Data Types:
    Function
    Array
    Pointer
    Reference

Abstract or User-Defined Data Types:
    Class
    Structure
    Union
    Enumeration
    Typedef defined DataType

*/

/*

Data Type Modifiers:
    short int(2 bytes) - (-32,768 to 32767) - (-2^15 to 2^15 - 1)
    unsigned short int(2 bytes) - (0 to 65535) - (0 to 2^16 - 1)
    unsigned int(4 bytes) - (0 to 4,294,967,295) - (0 to 2^32 - 1)
    int(4 bytes) - (-2,147,483,648 to 2,147,483,647) - (-2^31 to 2^31 - 1)
    long int(4 bytes) - (-2,147,483,648 to 2,147,483,647) - (-2^31 to 2^31 - 1)
    unsigned long int(4 bytes) - (0 to 4,294,967,295) - (0 to 2^32 - 1)
    long long int(8 bytes) - (-2^63 to 2^63 - 1)
    unsigned long long int(8 bytes) - (0 to 18,446,744,073,709,551,615)
    signed char(1 byte) - (-128 to 127)
    unsigned char(1 byte) - (0 to 255)
    float(4 bytes)
    double(8 bytes)
    long double(12 bytes)
    wchar_t(2 or 4 bytes) - 1 wide character

*/