#include <iostream>
#include "Turtle.h"

Turtle::Turtle(int age) : m_age(age) {}

Turtle::Turtle(const Turtle &other)
{
    m_age = other.m_age;
    std::cout << "Copy-Constructor Turtle" << std::endl;
}
