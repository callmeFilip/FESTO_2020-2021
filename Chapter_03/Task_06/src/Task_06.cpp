//: C03:YourPets2.cpp
#include <iostream>
using namespace std;

int dog;
char cat;
float bird;
double fish;

void f(int pet) {
    cout << "pet id number: " << pet << endl;
}

double d(float bird) 
{
    cout << "bird float: " << bird << endl;

    return 0.0;
}

int main() {
    
    int i, j, k;
    cout << "f(): " << (long)&f << endl;
    cout << "dog: " << (long)&dog << endl;
    cout << "cat: " << (long)&cat << endl;
    cout << "bird: " << (long)&bird << endl;
    cout << "fish: " << (long)&fish << endl;
    cout << "i: " << (long)&i << endl;
    cout << "j: " << (long)&j << endl;
    cout << "k: " << (long)&k << endl;

    return 0;
} ///:~ 