//: C03:ArrayAddresses.cpp
#include <iostream>

using namespace std;

int main() {
    
    int a[10];
    
    cout << "sizeof(int) = " << sizeof(int) << endl;
    
    for (int i = 0; i < 10; i++)
    {
        cout << "&a[" << i << "] = "
            << (long)&a[i] << endl;
    }

    char charArr[10];

    cout << "sizeof(char) = " << sizeof(char) << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "&charArr[" << i << "] = "
            << (long)&charArr[i] << endl;
    }

    long int longIntArr[10];

    cout << "sizeof(long int) = " << sizeof(long int) << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "&longIntArr[" << i << "] = "
            << (long)&longIntArr[i] << endl;
    }

    float floatArr[10];

    cout << "sizeof(float) = " << sizeof(float) << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "&floatArr[" << i << "] = "
            << (long)&floatArr[i] << endl;
    }

    double doubleArr[10];

    cout << "sizeof(double) = " << sizeof(double) << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "&doubleArr[" << i << "] = "
            << (long)&doubleArr[i] << endl;
    }

    return 0;

} ///:~ 
