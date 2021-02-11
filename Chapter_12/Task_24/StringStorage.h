#ifndef STRINGSTORAGE_H
#define STRINGSTORAGE_H
#include <string>
class StringStorage
{
private:
    std::string m_str;

public:
    StringStorage(std::string str = "empty") : m_str(str){};
    void print() const;
};

#endif // STRINGSTORAGE_H
