//: C13:NewHandler.cpp
// Changing the new-handler
#include <iostream>
#include <cstdlib>
#include <new>
int count = 0;

void out_of_memory()
{
    std::cerr << "memory exhausted after " << count
              << " allocations!" << std::endl;
    exit(1);
}

int main()
{
    std::set_new_handler(out_of_memory);
    while (1)
    {
        count++;
        new int[1000]; // Exhausts memory
    }
} ///:~

/**
 * The free store for my program is around 502611 bytes or around 1.89 gigabytes 
*/
