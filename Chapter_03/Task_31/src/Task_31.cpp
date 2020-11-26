#include <iostream>
using namespace std;
#ifdef DEBUG
#define P(A) cout << #A << ": " << (A) << endl;
#endif

int main(int argc, char *argv[])
{

    int a = 1, b = 2, c = 3;

#ifdef DEBUG
    P(a);
    P(b);
    P(c);
    P(a + b);
    P((c - a) / b);
#endif // DEBUG
    std::cout << "exiting..";
    return 0;
} ///:~

//g++ Task_31.cpp -D DEBUG - for compilation with debug on
//g++ Task_31.cpp - for compilation with debug off