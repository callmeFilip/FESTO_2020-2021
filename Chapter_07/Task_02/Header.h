#ifndef HEADER_H
#define HEADER_H
#include <string>
class Message
{
    std::string m_message;

public:
    Message(std::string);

    void print();
    void print(std::string);
};

#endif
