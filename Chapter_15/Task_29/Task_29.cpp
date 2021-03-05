#include <iostream>

class X
{
private:
public:
    X()
    {
        vf();
    }
    virtual void vf()
    {
        std::cout << "X::vf()" << std::endl;
    }
};

class Y : public X
{
private:
public:
    Y() : X() { vf(); }
};

int main()
{
    Y y;

    /**
     * Vptr marked with <====== vptr assignment
     * *
     * Not sure.
     * *
     * It should call the local function because the object isn't fully
     * initialized yet and this may provide oportunity to work with
     * unitialized members when inheriting.
    */
    return 0;
}
