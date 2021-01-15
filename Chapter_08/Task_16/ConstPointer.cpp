//: C08:ConstPointer.cpp
// Constant pointer arg/return
void t(int *) {}
void u(const int *cip)
{
    //*cip = 2;     // error: assignment of read-only location '* cip'
    int i = *cip; // OK -- copies value
    //int *ip2 = cip; // error: invalid conversion from 'const int*' to 'int*' [-fpermissive]
}
const char *v()
{
    // Returns address of static character array:
    return "result of function v()";
}
const int *const w()
{
    static int i;
    return &i;
}
int main()
{
    int x = 0;
    int *ip = &x;
    const int *cip = &x;
    t(ip); // OK

    //t(cip); // error: invalid conversion from 'const int*' to 'int*' [-fpermissive]

    u(ip);  // OK
    u(cip); // Also OK

    //char *cp = v(); // error: invalid conversion from 'const char*' to 'char*' [-fpermissive]

    const char *ccp = v(); // OK

    //int *ip2 = w(); // error: invalid conversion from 'const int*' to 'int*' [-fpermissive]

    const int *const ccip = w(); // OK
    const int *cip2 = w();       // OK
    //*w() = 1;                    // error: assignment of read-only location '* w()'
}