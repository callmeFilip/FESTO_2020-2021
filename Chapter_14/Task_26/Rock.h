#ifndef ROCK_H
#define ROCK_H

class Rock
{
private:
public:
    Rock();
    Rock(const Rock &);
    Rock &operator=(const Rock &);
    ~Rock();
};

#endif