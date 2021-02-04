#ifndef VELOCIRAPTOR_H
#define VELOCIRAPTOR_H

class Velociraptor
{
private:
    int m_data;

public:
    Velociraptor(int data = 0) : m_data(data) {}
    Velociraptor(const Velociraptor &other, int data = 10);
};

#endif // VELOCIRAPTOR_H
