#ifndef FUNCTION_CLASS_H
#define FUNCTION_CLASS_H

#include <iostream>

#define DF(N)                                                  \
    void N()                                                   \
    {                                                          \
        std::cout << "function " #N " called..." << std::endl; \
    }

class FunctionClass
{
private:
public:
    DF(a);
    DF(b);
    DF(c);
    DF(d);
    DF(e);
    DF(f);
    DF(g);
};

#endif // FUNCTION_CLASS_H
