#ifndef PAGER_H
#define PAGER_H
#include <string>
class Pager
{
private:
    std::string str;

public:
    Pager(std::string value);
    Pager(const Pager &);
    Pager &operator=(const Pager &);

    std::string getStr() const;
};

#endif // Pager