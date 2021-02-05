#ifndef FOLDER_H
#define FOLDER_H

class Folder
{
private:
    int m_size;
    Folder(const Folder &other) : m_size(other.m_size) {}

public:
    Folder(int size = 0);

    int getSize() const { return m_size; };
};

#endif // FOLDER_H
