#ifndef FUNCTION_HOLDER_H
#define FUNCTION_HOLDER_H
#include <vector>
#include "FunctionClass.h"
typedef void (FunctionClass::*func_t)();

class FunctionHolder
{
private:
    FunctionClass &m_instance; // instance is necessary to call the functions
    std::vector<func_t> m_storage;

public:
    FunctionHolder(FunctionClass &instance) : m_instance(instance) {}

    void add(func_t function);
    void remove();
    void run();
};

#endif // FUNCTION_HOLDER_H
