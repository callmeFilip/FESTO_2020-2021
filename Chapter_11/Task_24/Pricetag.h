#ifndef PRICETAG_H
#define PRICETAG_H

class PriceTag
{
private:
public:
    double m_price;
    PriceTag(double price = 0);
    void print() const;
};

#endif // PRICETAG_H
