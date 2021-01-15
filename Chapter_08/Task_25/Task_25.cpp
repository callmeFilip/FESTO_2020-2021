//: C08:Mutable.cpp
// The "mutable" keyword
class Z
{
    int i;
    mutable int j;

public:
    Z();
    void f() const;
};
Z::Z() : i(0), j(0) {}
void Z::f() const
{
    // i++; // error: increment of member 'Z::i' in read-only object
    j++; // OK: mutable
}
int main()
{
    const Z zz;
    zz.f(); // Actually changes it!
} ///:~