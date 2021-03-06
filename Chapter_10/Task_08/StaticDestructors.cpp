//: C10:StaticDestructors.cpp
// Static object destructors
#include <fstream>

using namespace std;

ofstream out("statdest.out"); // Trace file

class Obj
{
    char c; // Identifier
public:
    Obj(char cc) : c(cc)
    {
        out << "Obj::Obj() for " << c << endl;
    }
    ~Obj()
    {
        out << "Obj::~Obj() for " << c << endl;
    }
};

Obj a('a'); // Global (static storage)
// Constructor & destructor always called
void f()
{
    static Obj b('b');
}

void g()
{
    static Obj c('c');
}

int main()
{
    out << "inside main()" << endl;
    g();
    f(); // Calls static constructor for b

    out << "leaving main()" << endl;

    return 0;
} ///:~

/**
// ORDER:
// f() then g();
// a, b, c / c, b, a
// 
// g() then f()
// a, c, b / b, c, a
// ANSWER:
// Yes, the order is right.
*/