#ifndef HEADER_H
#define HEADE_H

struct Building
{
    struct Room
    {
    private:
        int m_size;

    public:
        Room(int size);
        int m_getSize();
    };
    Room *m_LivingRoom;
    Building(int roomSize);
    ~Building();
};

#endif