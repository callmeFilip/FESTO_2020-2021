//: C12:CopyingWithPointers.cpp
// Solving the pointer aliasing problem by
// duplicating what is pointed to during
// assignment and copy-construction.
#include "require.h"
#include <string>
#include <iostream>
using namespace std;
class Dog
{
    string nm;

public:
    Dog(const string &name) : nm(name)
    {
        cout << "Creating Dog: " << *this << endl;
    }

    // Synthesized copy-constructor & operator=
    // are correct.
    // Create a Dog from a Dog pointer:

    Dog(const Dog *dp, const string &msg)
        : nm(dp->nm + msg)
    {
        cout << "Copied dog " << *this << " from "
             << *dp << endl;
    }

    ~Dog()
    {
        cout << "Deleting Dog: " << *this << endl;
    }

    void rename(const string &newName)
    {
        nm = newName;
        cout << "Dog renamed to: " << *this << endl;
    }

    friend ostream &
    operator<<(ostream &os, const Dog &d)
    {
        return os << "[" << d.nm << "]";
    }
};
class DogHouse
{
    string houseName;

public:
    Dog *p; // This is public for demonstration purpose

    DogHouse(Dog *dog, const string &house)
        : p(dog), houseName(house) {}

    DogHouse(const DogHouse &dh)
        : p(new Dog(dh.p, " copy-constructed")),
          houseName(dh.houseName + " copy-constructed") {}

    void renameHouse(const string &newName)
    {
        houseName = newName;
    }

    Dog *getDog() const { return p; }

    ~DogHouse() { delete p; }

    friend ostream &
    operator<<(ostream &os, const DogHouse &dh)
    {
        return os << "[" << dh.houseName
                  << "] contains " << *dh.p;
    }
};
int main()
{
    DogHouse fidos(new Dog("Fido"), "FidoHouse");

    DogHouse fidos2 = fidos; // Copy construction
    cout << fidos2 << endl;

    cout << fidos2 << endl;
    fidos = fidos2; // Assignment

    std::cout << "Two different pointers are pointing to the same place: " << std::endl;
    cout << (long)fidos.p << endl;
    cout << (long)fidos2.p << endl;

    return 0;
} ///:~