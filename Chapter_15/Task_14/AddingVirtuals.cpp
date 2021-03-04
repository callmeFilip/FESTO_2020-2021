//: C15:AddingVirtuals.cpp
// Adding virtuals in derivation
#include <iostream>
#include <string>
using namespace std;

class Pet
{
    string pname;

public:
    Pet(const string &petName) : pname(petName) {}
    virtual string name() const = 0;
    virtual string speak() const = 0;
};

inline string Pet::name() const { return pname; }

class Dog : public Pet
{
public:
    Dog(const string &petName) : Pet(petName) {}

    // New virtual function in the Dog class:
    virtual string sit() const
    {
        return name() + " sits";
    }

    string speak() const
    { // Override
        return name() + " says 'Bark!'";
    }

    string name() const
    {
        return Pet::name();
    }
};

int main()
{
    Pet *p[] = {new Dog("bob")};

    cout << "p[0]->speak() = "
         << p[0]->speak() << endl;

    //! cout << "p[1]->sit() = "
    //! << p[1]->sit() << endl; // Illegal

    return 0;
} ///:~
