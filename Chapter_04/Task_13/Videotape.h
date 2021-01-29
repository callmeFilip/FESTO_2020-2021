#ifndef VIDEOTAPE_H
#define VIDEOTAPE_H

#include <string>
#include <time.h>

class Videotape
{
private:
    struct VideotapeData
    {
        int m_id;
        int m_renterId;
        int m_rentedDays; // rented for m_rentedDays days since starting date"
        time_t m_startRentDate;
        std::string m_videoTitle;
        bool m_isRented;

        VideotapeData()
        {
        }
    } m_data;

public:
    //constructors
    Videotape();
    Videotape(int n_id, std::string n_videoTitle);

    //methods
    bool setRent(int n_renterId, int n_rentedDays);
    void printVideoData(void);
    void returned();
    VideotapeData videotypeData();
};

#endif // VIDEOTAPE_H
