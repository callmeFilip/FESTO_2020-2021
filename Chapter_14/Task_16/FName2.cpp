
//: C14:FName2.cpp
// Subtyping solves the problem
#include "require.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class FName2 : public ifstream
{
    string fileName;
    bool named;

public:
    FName2() : named(false) {}
    FName2(const string &fname)
        : ifstream(fname.c_str()), fileName(fname)
    {
        assure(*this, fileName);
        named = true;
    }
    string name() const { return fileName; }
    void name(const string &newName)
    {
        if (named)
            return; // Don't overwrite
        fileName = newName;
        named = true;
    }
};

int main()
{
    FName2 file("FName2.cpp");

    assure(file, "FName2.cpp");

    cout << "name: " << file.name() << endl;

    std::cout << file.peek() << std::endl;

    if (file.is_open())
    {
        std::cout << "closing file.." << std::endl;
        file.close();
    }

    std::cout << "Is file good? " << file.good() << std::endl;

    return 0;
} ///:~
