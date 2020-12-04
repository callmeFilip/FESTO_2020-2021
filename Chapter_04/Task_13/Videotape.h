#pragma once
#include <string>

class Videotape
{
    int m_id;
    int m_renterId;
    int m_rentedDays;
    std::string m_videoTitle;
    bool m_isRented;

public:
    //constructors
    Videotape();
    Videotape(int n_id, std::string n_videoTitle);

    //methods
    bool setRent(int n_renterId, int n_rentedDays);
    void printVideoData(void);
};
