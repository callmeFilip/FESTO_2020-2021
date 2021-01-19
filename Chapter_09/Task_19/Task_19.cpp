#include <iostream>
#include "Contact.h"

int main(int argc, char const *argv[])
{
    Contact obj;
    obj.setfirstName_string("Petar");
    obj.setfirstName_size(6);

    obj.setlastName_string("Petrov");
    obj.setlastName_size(7);

    std::cout << "First name: " << obj.getfirstName_string()
              << " has size of: " << obj.getfirstName_size() << std::endl
              << "Last name: " << obj.getlastName_string()
              << " nas size of: " << obj.getlastName_size() << std::endl;

    return 0;
}
