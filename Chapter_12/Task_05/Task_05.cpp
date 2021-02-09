#include "Increment.h"

/**
 * Prefixed operator returns pointer to
 * the object that was incremented and it
 * doesn't need to be const (This gives the opportunity to 
 * call non-const member functions), 
 * but for the postfix this isn't the case.
 * In postfix operator++ / -- it returns a new object,
 * which is const by default.
*/

int main()
{
    Increment obj1(1), obj2(22);

    std::cout << "Created: " << std::endl;
    obj1.print(std::cout);
    obj2.print(std::cout);

    // Increment test
    obj1++;
    ++obj2;
    std::cout << "First increment, then print: " << std::endl;
    obj1.print(std::cout);
    obj2.print(std::cout);

    std::cout << "Incrementing while printing: " << std::endl;
    (obj1++).print(std::cout);
    (++obj2).print(std::cout);

    std::cout << "Print to prove that obj1 was incremented: " << std::endl;
    obj1.print(std::cout);
    obj2.print(std::cout);

    // Decrement test
    obj1--;
    --obj2;
    std::cout << "First decrement, then print: " << std::endl;
    obj1.print(std::cout);
    obj2.print(std::cout);

    std::cout << "Decrementing while printing: " << std::endl;
    (obj1--).print(std::cout);
    (--obj2).print(std::cout);

    std::cout << "Print to prove that obj1 was decremented: " << std::endl;
    obj1.print(std::cout);
    obj2.print(std::cout);

    return 0;
}
