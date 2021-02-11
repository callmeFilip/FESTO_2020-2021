#include "Integer.h"
#include <fstream>

std::ofstream out("result.txt");

#define TRYU(EXP)     \
    out << #EXP " = " \
        << EXP;       \
    out << std::endl;

#define TRY(OP)                     \
    out << "num1 = " << num1        \
        << ", num2 = " << num2      \
        << "; num1 " #OP " num2 = " \
        << (num1 OP num2)           \
        << std::endl;

#define TRYC(OP)                    \
    out << "num1 = " << num1        \
        << ", num2 = " << num2      \
        << "; num1 " #OP " num2 = " \
        << (num1 OP num2)           \
        << std::endl;

void testWithOne(Integer num)
{

    TRYU(+num;)
    TRYU(-num;)
    TRYU(~num;)
    Integer *ip;
    TRYU(*(ip = &num))
    TRYU(!num;)
    TRYU(++num);
    TRYU(num++);
    TRYU(--num);
    TRYU(num--);
}

void testWithTwo(Integer &num1, Integer &num2)
{
    // Arithmetic
    TRY(+)
    TRY(-)
    TRY(*)
    TRY(/)
    TRY(%)

    // Bitwise
    TRY(^)
    TRY(&)
    TRY(|)
    TRY(<<)
    TRY(>>)

    // Assignment
    TRY(+=)
    TRY(-=)
    TRY(*=)
    TRY(/=)
    TRY(%=)
    TRY(^=)
    TRY(&=)
    TRY(|=)
    TRY(>>=)
    TRY(<<=)

    // Conditionals
    TRYC(<)
    TRYC(>)
    TRYC(==)
    TRYC(!=)
    TRYC(<=)
    TRYC(>=)
    TRYC(&&)
    TRYC(||)
}

int main()
{
    Integer num1(10);
    Integer num2(12);

    testWithOne(num1);
    testWithTwo(num1, num2);

    return 0;
}