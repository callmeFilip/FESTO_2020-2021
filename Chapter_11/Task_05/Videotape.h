#ifndef VIDEOTAPE_H
#define VIDEOTAPE_H

class Videotape
{
private:
    int m_length;

public:
    Videotape(int length = 0) : m_length(length) {}

    int getLength() const;

    void setLength(int length);
};

#endif // VIDEOTAPE_H
