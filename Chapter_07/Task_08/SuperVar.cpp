#include <iostream>

#define PATH

enum VarType
{
    character,
    integer,
    floating_point
};

class SuperVar
{
#ifdef PATH
    VarType vartype;
#endif
    union
    {
        char c;
        int i;
        float f;
    };

public:
    SuperVar(char ch);
    SuperVar(int ii);
    SuperVar(float ff);
#ifdef PATH
    void print();
#else
    void print(VarType vartype);
#endif
};

SuperVar::SuperVar(char ch)
{
#ifdef PATH
    vartype = character;
#endif
    c = ch;
}

SuperVar::SuperVar(int ii)
{
#ifdef PATH
    vartype = integer;
#endif
    i = ii;
}

SuperVar::SuperVar(float ff)
{
#ifdef PATH
    vartype = floating_point;
#endif
    f = ff;
}

#ifdef PATH
void SuperVar::print()
#else
void SuperVar::print(VarType vartype)
#endif
{
    switch (vartype)
    {
    case character:
        std::cout << "character: " << c << std::endl;
        break;
    case integer:
        std::cout << "integer: " << i << std::endl;
        break;
    case floating_point:
        std::cout << "float: " << f << std::endl;
        break;
    }
}

int main()
{
    SuperVar A('c'), B(12), C(1.44F);

#ifdef PATH
    A.print();
    B.print();
    C.print();
#else
    A.print(character);
    B.print(integer);
    C.print(floating_point);
#endif

    return 0;
}