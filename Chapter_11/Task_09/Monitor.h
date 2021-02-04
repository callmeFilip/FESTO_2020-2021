#ifndef MONITOR_H
#define MONITOR_H

class Monitor
{
private:
    int m_id;

public:
    Monitor(int id = 0) : m_id(id){};
    Monitor(Monitor &other) { m_id = other.m_id; }
    int getId() const;
    void setId(int id);
};

#endif // MONITOR_H