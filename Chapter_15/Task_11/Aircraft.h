#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include <string>

class Aircraft
{
private:
    int m_id;
    std::string m_name;
    bool m_isAvailable;
    int m_fuel;

public:
    Aircraft(int, std::string);
    virtual ~Aircraft();
    virtual bool takeOff();
    virtual bool land();
    virtual void refuel();
    virtual bool isAvailable() const;
    virtual int currentFuel() const;
    virtual int getId() const;
    virtual void printInformation() const;
};

#endif // AIRCRAFT_H
