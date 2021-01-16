//: C09:MacroSideEffects.cpp
#include <fstream>
using namespace std;
#define BAND(x) (((x) > 5 && (x) < 10) ? (x) : 0)

inline int function(int x)
{
    if ((x) > 5 && (x) < 10)
    {
        return x;
    }
    else
    {
        return 0;
    }
}

int main()
{
    ofstream out("macro.out");
    for (int i = 4; i < 11; i++)
    {
        int a = i;
        out << "a = " << a << endl
            << '\t';
        out << "BAND(++a)=" << function(++a) << endl;
        out << "\t a = " << a << endl;
    }
} ///:~