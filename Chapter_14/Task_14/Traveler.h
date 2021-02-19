#ifndef TRAVELER_H
#define TRAVELER_H
#include <string>
class Traveler
{
private:
    std::string str;

public:
    Traveler(std::string value);
    Traveler(const Traveler &);
    Traveler &operator=(const Traveler &);

    std::string getStr() const;
};

#endif // TRAVELER_H
