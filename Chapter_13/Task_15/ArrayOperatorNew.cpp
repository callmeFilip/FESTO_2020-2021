//: C13:ArrayOperatorNew.cpp
// Operator new for arrays
#include "MemoryChecker.h"

using namespace std;

ofstream trace("ArrayOperatorNew.out");

int main()
{
    trace << "new Widgets" << endl;
    Widget *w1 = new Widget;
    Widget *w2 = new Widget;
    Widget *w3 = new Widget;
    Widget *w4 = new Widget;

    trace << "\ndelete Widget" << endl;
    delete w1;
    delete w2;
    delete w3;
    delete w4;

    trace << "\nnew Widget[25]" << endl;
    Widget *wa1 = new Widget[25];
    Widget *wa2 = new Widget[25];

    trace << "\ndelete []Widget" << endl;
    delete[] wa1;
    delete[] wa2;

    return 0;
} ///:~
