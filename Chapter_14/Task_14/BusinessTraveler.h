#ifndef BUSINESSTRAVELER_H
#define BUSINESSTRAVELER_H
#include "Traveler.h"
#include "Pager.h"

class BusinessTraveler : public Traveler
{
private:
    Pager pager;

public:
    BusinessTraveler();
    BusinessTraveler(std::string value);
    BusinessTraveler(const BusinessTraveler &);
    BusinessTraveler &operator=(const BusinessTraveler &);

    void print() const;
};

#endif // BUSINESSTRAVELER_H
