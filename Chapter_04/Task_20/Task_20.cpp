#include <iostream>

struct struct_with_data_members_only
{
    int a;
    double b;
};

struct struct_with_data_members_and_functions
{
    double b;

    int function1(void);
    double sum(double a, double b);
};

struct struct_no_members
{
};

template <class T>
void printSize(T object)
{
    std::cout << sizeof(T) << std::endl;
}

int main()
{
    struct_with_data_members_only block_data;
    struct_with_data_members_and_functions block_functions_and_data;
    struct_no_members block_no_members;

    printSize(block_data);
    printSize(block_functions_and_data);
    printSize(block_no_members); //1
    /*
    Struct with no members have size 1, because it needs to be stored in the memory in order
    to get instances of it, but since it have no members to get stored, the compiler stores
    a null character. // izmislih si go po putq na logikata, moje i da ne e vqrno
    */

    return 0;
}