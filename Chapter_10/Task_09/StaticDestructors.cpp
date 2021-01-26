//: C10:StaticDestructors.cpp
// Static object destructors
#include <fstream>
using namespace std;
extern ofstream out;

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

ofstream out("statdest.out"); // Trace file

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
    f(); // Calls static constructor for b
    // g() not called
    out << "leaving main()" << endl;
    return 0;
} ///:~

// At first sign no errors/warnings are logged
// When i check the return code, it is -1073741819
