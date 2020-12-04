#include "../inc/Person.h"
void Person::print(void)
{
    std::cout << "\n\nPerson named: " << m_firstName << " " << m_lastName
        << " is " << m_age << " years old!\n\n";

}
