//: C08:ConstReturnValues.cpp
// Constant return by value
// Result cannot be used as an lvalue
class X
{
    int i;

public:
    X(int ii = 0);
    int modify();
};

X::X(int ii)
{
    i = ii;
}

int X::modify()
{
    return ++i;
}

X f5()
{
    return X();
}

const X f6()
{
    return X();
}

void f7(X &x)
{ // Pass by non-const reference
    x.modify();
}

int main()
{
    f5() = X(1);   // OK -- non-const return value
    f5().modify(); // OK

    // Causes compile-time errors:
    //f7(f5()); //can't pass object by value to function that takes only address
    //f6() = X(1); //can't assign non-const value to const value
    //f6().modify(); can't modify const object
    //f7(f6()); //can't pass object by value to function that takes only address

} ///:~