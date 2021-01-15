#include <iostream>
#include "MyString.h"
#include "StringStack.h"

const int OBJECTCOUNT = 10;

MyString::MyString(std::string value) : buffer(value) {}
void MyString::print() const
{
    std::cout << buffer << std::endl;
}

int main()
{
    StringStack storage;

    for (int i = 0; i < OBJECTCOUNT; i++)
    {
        MyString *temp = new MyString("Test String" + i);
        storage.push(temp);
    }

    for (int i = 0; i < OBJECTCOUNT; i++)
    {
        storage.pop()->print();
    }

    return 0;
}
