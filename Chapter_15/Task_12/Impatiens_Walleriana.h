#ifndef IMPATIENS_VALERIANA_H
#define IMPATIENS_VALERIANA_H

#include "Plant.h"

class Impatiens_Walleriana : public Plant
{
private:
public:
    Impatiens_Walleriana(std::string);
    ~Impatiens_Walleriana();

    virtual void photosynthesis() const;
    virtual void grow() const;
};

#endif // IMPATIENS_VALERIANA_H
