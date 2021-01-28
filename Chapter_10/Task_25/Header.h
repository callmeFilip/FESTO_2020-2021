#ifndef HEADER_H
#define Header_H
#include <string>
#include <iostream>

class TextHolder
{
private:
    std::string m_text;

public:
    TextHolder(std::string text_value) : m_text(text_value) {}
    void print()
    {
        std::cout << m_text << std::endl;
    }
};

#endif
