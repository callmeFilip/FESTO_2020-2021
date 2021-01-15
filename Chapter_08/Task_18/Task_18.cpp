//: C08:ConstTemporary.cpp
// Temporaries are const
class X
{
};
X f() { return X(); } // Return by value

void g1(X &) {} // Pass by non-const reference

void g2(const X &) {} // Pass by const reference

int main()
{
    // Error: const temporary created by f():
    // g1(f()); // error: cannot bind non-const lvalue reference of type 'X&' to an rvalue of type 'X'
    // OK: g2 takes a const reference:
    g2(f());
} ///:~