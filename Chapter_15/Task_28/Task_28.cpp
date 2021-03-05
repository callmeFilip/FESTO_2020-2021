#include <iostream>

class X
{
private:
public:
    virtual void vf()
    {
        std::cout << "X::vf()" << std::endl;
    }
};

class Y : public X
{
private:
public:
};

int main()
{
    Y y;
    /**
     * I am not really sure about this one.
     * I think that constructors and destructors
     * are generated inline.
    */
    return 0;
}
