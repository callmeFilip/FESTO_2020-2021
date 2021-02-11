//: C12:ReferenceCounting.cpp
// Reference count, copy-on-write
#include "require.h"
#include <string>
#include <iostream>
using namespace std;
class Dog
{
    string nm;
    int refcount;
    int iNum;
    static int staticINum;

    Dog(const string &name)
        : nm(name), refcount(1)
    {
        staticINum++;
        iNum = staticINum;
        cout << "Creating Dog: " << *this << endl;
        std::cout << "Dog Number: " << iNum << std::endl;
    }

    // Prevent assignment:
    Dog &operator=(const Dog &rv);

public:
    // Dogs can only be created on the heap:
    static Dog *make(const string &name)
    {
        return new Dog(name);
    }

    Dog(const Dog &d)
        : nm(d.nm + " copy"), refcount(1)
    {
        staticINum++;
        iNum = staticINum;
        cout << "Dog copy-constructor: "
             << *this << endl;
        std::cout << "Dog Number: " << iNum << std::endl;
    }

    ~Dog()
    {
        cout << "Deleting Dog: " << *this << endl;
        std::cout << "Dog Number: " << iNum << std::endl;
    }

    void attach()
    {
        ++refcount;
        cout << "Attached Dog: " << *this << endl;
        std::cout << "Dog Number: " << iNum << std::endl;
    }

    void detach()
    {
        require(refcount != 0);
        cout << "Detaching Dog: " << *this << endl;
        std::cout << "Dog Number: " << iNum << std::endl;

        // Destroy object if no one is using it:
        if (--refcount == 0)
            delete this;
    }

    // Conditionally copy this Dog.
    // Call before modifying the Dog, assign
    // resulting pointer to your Dog*.
    Dog *unalias()
    {
        cout << "Unaliasing Dog: " << *this << endl;
        std::cout << "Dog Number: " << iNum << std::endl;

        // Don't duplicate if not aliased:
        if (refcount == 1)
            return this;
        --refcount;
        // Use copy-constructor to duplicate:
        return new Dog(*this);
    }

    void rename(const string &newName)
    {
        nm = newName;
        cout << "Dog renamed to: " << *this << endl;
        std::cout << "Dog Number: " << iNum << std::endl;
    }

    friend ostream &
    operator<<(ostream &os, const Dog &d)
    {
        return os << "[" << d.nm << "], rc = "
                  << d.refcount;
    }
};

int Dog::staticINum = 0;

class DogHouse
{
    Dog *p;
    string houseName;
    int iNum;
    static int staticINum;

public:
    DogHouse(Dog *dog, const string &house)
        : p(dog), houseName(house)
    {
        staticINum++;
        iNum = staticINum;
        cout << "Created DogHouse: " << *this << endl;
        std::cout << "DogHouse Number: " << iNum << std::endl;
    }

    DogHouse(const DogHouse &dh)
        : p(dh.p),
          houseName("copy-constructed " +
                    dh.houseName)
    {
        staticINum++;
        iNum = staticINum;
        p->attach();
        cout << "DogHouse copy-constructor: "
             << *this << endl;
        std::cout << "DogHouse Number: " << iNum << std::endl;
    }

    DogHouse &operator=(const DogHouse &dh)
    {
        // Check for self-assignment:
        if (&dh != this)
        {
            houseName = dh.houseName + " assigned";
            // Clean up what you're using first:
            p->detach();
            p = dh.p; // Like copy-constructor
            p->attach();
        }
        cout << "DogHouse operator= : "
             << *this << endl;
        std::cout << "DogHouse Number: " << iNum << std::endl;

        return *this;
    }

    // Decrement refcount, conditionally destroy
    ~DogHouse()
    {
        cout << "DogHouse destructor: "
             << *this << endl;
        std::cout << "DogHouse Number: " << iNum << std::endl;

        p->detach();
    }

    void renameHouse(const string &newName)
    {
        houseName = newName;
    }

    void unalias() { p = p->unalias(); }

    // Copy-on-write. Anytime you modify the
    // contents of the pointer you must
    // first unalias it:
    void renameDog(const string &newName)
    {
        unalias();
        p->rename(newName);
    }

    // ... or when you allow someone else access:
    Dog *getDog()
    {
        unalias();
        return p;
    }

    friend ostream &
    operator<<(ostream &os, const DogHouse &dh)
    {
        return os << "[" << dh.houseName
                  << "] contains " << *dh.p;
    }
};

int DogHouse::staticINum = 0;

int main()
{
    DogHouse
        fidos(Dog::make("Fido"), "FidoHouse"),
        spots(Dog::make("Spot"), "SpotHouse");

    cout << "Entering copy-construction" << endl;

    DogHouse bobs(fidos);

    cout << "After copy-constructing bobs" << endl;
    cout << "fidos:" << fidos << endl;
    cout << "spots:" << spots << endl;
    cout << "bobs:" << bobs << endl;

    cout << "Entering spots = fidos" << endl;
    spots = fidos;
    cout << "After spots = fidos" << endl;

    cout << "spots:" << spots << endl;

    cout << "Entering self-assignment" << endl;
    bobs = bobs;
    cout << "After self-assignment" << endl;

    cout << "bobs:" << bobs << endl;

    // Comment out the following lines:
    cout << "Entering rename(\"Bob\")" << endl;
    bobs.getDog()->rename("Bob");
    cout << "After rename(\"Bob\")" << endl;
} ///:~