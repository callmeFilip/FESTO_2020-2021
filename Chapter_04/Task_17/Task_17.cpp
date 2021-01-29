#include <iostream>

using namespace std;

int main()
{
    int *smallFish = new int;
    long *longFish = new long;
    char *name = new char[100];
    float *measurements = new float[100];

    cout << (long)smallFish << endl
         << (long)longFish << endl
         << (long)name << endl
         << (long)measurements << endl
         << endl;

    delete smallFish;
    delete longFish;
    delete[] name;
    delete[] measurements;

    return 0;
}