//: C12:PointerToMemberOperator.cpp
#include <iostream>
using namespace std;
class Dog
{
public:
    int run(int i) const
    {
        cout << "run\n";
        return i;
    }
    int eat(int i) const
    {
        cout << "eat\n";
        return i;
    }
    int sleep(int i) const
    {
        cout << "ZZZ\n";
        return i;
    }
    void makeSound() const
    {
        cout << "Bau" << std::endl;
    }

    void roar() const
    {
        cout << "HRRR" << std::endl;
    }

    typedef int (Dog::*PMF)(int) const;
    typedef void (Dog::*SoundFunctionPtr)() const;
    // operator->* must return an object
    // that has an operator():
    class FunctionObject
    {
        Dog *ptr;
        PMF pmem;
        SoundFunctionPtr sfp;

    public:
        // Save the object pointer and member pointer
        FunctionObject(Dog *wp, PMF pmf)
            : ptr(wp), pmem(pmf)
        {
            cout << "FunctionObject constructor\n";
        }
        FunctionObject(Dog *wp, SoundFunctionPtr pmfVal)
            : ptr(wp), sfp(pmfVal)
        {
            cout << "FunctionObject constructor for sound functions\n";
        }
        // Make the call using the object pointer
        // and member pointer
        int operator()(int i) const
        {
            cout << "FunctionObject::operator()\n";
            return (ptr->*pmem)(i); // Make the call
        }
        void operator()() const
        {
            cout << "FunctionObject::operator()\n";
            (ptr->*sfp)(); // Make the call
        }
    };
    FunctionObject operator->*(PMF pmf)
    {
        cout << "operator->*" << endl;
        return FunctionObject(this, pmf);
    }

    FunctionObject operator->*(SoundFunctionPtr sfp)
    {
        cout << "operator->*" << endl;
        return FunctionObject(this, sfp);
    }
};

int main()
{
    Dog w;
    Dog::SoundFunctionPtr sfp = &Dog::roar;
    (w->*sfp)();
    sfp = &Dog::makeSound;
    (w->*sfp)();

} ///:~