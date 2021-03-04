#ifndef PLANT_H
#define PLANT_H

#include <string>
class Plant
{
private:
    static int m_currentId;
    int m_id;
    std::string m_type;

public:
    Plant(std::string);
    virtual ~Plant();

    virtual void photosynthesis() const;
    virtual void grow() const;
};

#endif // PLANT_H
