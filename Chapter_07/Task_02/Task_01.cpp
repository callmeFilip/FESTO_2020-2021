#include <iostream>

#include "Header.h"

Message::Message(std::string message = "default value")
{
    m_message = message;
}
void Message::print()
{
    std::cout << m_message << std::endl;
}
void Message::print(std::string additionalString)
{
    std::cout << m_message + additionalString << std::endl;
}

int main()
{
    Message defMessage;
    defMessage.print();
    defMessage.print("with addition");

    Message customMessage("custom");
    customMessage.print();
    customMessage.print("with addition");

    return 0;
}
