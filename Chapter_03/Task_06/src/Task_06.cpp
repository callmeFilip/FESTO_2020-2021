//: C03:YourPets2.cpp
#include <iostream>
using namespace std;

char cat;

void f(int pet)
{
    cout << "pet id number: " << pet << endl;
}

double d(float bird)
{
    cout << "bird float: " << bird << endl;

    return 0.0;
}

int main()
{

    int dog;
    int i;
    unsigned int ui;
    short int si;
    short sii;
    unsigned short int usi;
    unsigned short usii;
    long int li;
    long lii;
    unsigned long int uli;
    unsigned long ulii;
    float bird;
    double fish;
    long double ld;

    cout << "f(): " << (long)&f << endl;
    cout << "dog: " << (long)&dog << endl;
    cout << "cat: " << (long)&cat << endl;
    cout << "bird: " << (long)&bird << endl;
    cout << "fish: " << (long)&fish << endl;
    cout << "i: " << (long)&i << endl;
    cout << "ui: " << (long)&ui << endl;
    cout << "si: " << (long)&si << endl;
    cout << "sii: " << (long)&sii << endl;
    cout << "usii: " << (long)&usii << endl;
    cout << "li: " << (long)&li << endl;
    cout << "lii: " << (long)&lii << endl;
    cout << "uli: " << (long)&uli << endl;
    cout << "ulii: " << (long)&ulii << endl;
    cout << "ld: " << (long)&ld << endl;

    return 0;
} ///:~