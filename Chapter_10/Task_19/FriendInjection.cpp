//: C10:FriendInjection.cpp
#include <iostream>

namespace Me
{
    class Us
    {
        //...
        friend void you();
    };
} // namespace Me

void Me::you()
{
    std::cout << "You!" << std::endl;
}

int main()
{

    Me::you();

} ///:~