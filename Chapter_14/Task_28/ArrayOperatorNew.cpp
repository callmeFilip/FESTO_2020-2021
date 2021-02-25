//: C13:ArrayOperatorNew.cpp
// Operator new for arrays
#include <new>
// Size_t definition
#include <fstream>

using namespace std;

ofstream trace("ArrayOperatorNew.out");

class Widget
{
    enum
    {
        sz = 10
    };
    int i[sz];

public:
    Widget() { trace << "*"; }
    ~Widget() { trace << "~"; }

    void *operator new(size_t sz)
    {
        trace << "Widget::new: " << sz << " bytes" << endl;
        return ::new char[sz];
    }

    void operator delete(void *p)
    {
        trace << "Widget::delete" << endl;
        ::delete[] p;
    }

    void *operator new[](size_t sz)
    {
        trace << "Widget::new[]: " << sz << " bytes" << endl;
        return ::new char[sz];
    }

    void operator delete[](void *p)
    {
        trace << "Widget::delete[]" << endl;
        ::delete[] p;
    }
};

class Child : public Widget
{
private:
public:
    Child() : Widget() {}
};

int main()
{
    trace << "new Child" << endl;
    Child *w = new Child;

    trace << "\ndelete Child" << endl;
    delete w;

    trace << "\nnew Child[25]" << endl;
    Child *wa = new Child[25];

    trace << "\ndelete []Child" << endl;
    delete[] wa;

    return 0;
} ///:~

/**
 * I think that Framis.cpp will not work correctly
 * because of the static pool part.
 * If new object of the child class gets created and it is bigger than Framis,
 * it will be allocated in the Framis's pool due to operator inheritence and 
 * the indexing will go off.
*/
