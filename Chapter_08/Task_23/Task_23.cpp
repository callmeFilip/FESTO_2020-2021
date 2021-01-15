#include <iostream>
#include "Header.h"

void Animal::makeSound() const
{
    std::cout << "PRRRRR" << std::endl;
}

void Animal::setAge(int age) {}

int main()
{
    Animal dog;

    dog.makeSound();
    dog.setAge(5);

    const Animal snake;

    snake.makeSound();
    //! snake.setAge(5); //passing 'const Animal' as 'this' argument discards qualifiers

    return 0;
}
