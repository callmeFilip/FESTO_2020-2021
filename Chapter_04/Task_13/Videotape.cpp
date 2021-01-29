#include "Videotape.h"
#include <iostream>

Videotape::Videotape()
{
    m_data.m_id = -1;
    m_data.m_renterId = -1;
    m_data.m_rentedDays = -1;
    m_data.m_startRentDate = -1;
    m_data.m_videoTitle = "unidentified";
    m_data.m_isRented = false;
}

Videotape::Videotape(int n_id, std::string n_videoTitle)
{
    m_data.m_id = n_id;
    m_data.m_renterId = -1;
    m_data.m_rentedDays = -1;
    m_data.m_startRentDate = -1;
    m_data.m_videoTitle = n_videoTitle;
    m_data.m_isRented = false;
}

bool Videotape::setRent(int n_renterId, int n_rentedDays)
{
    if (n_renterId >= 0 && n_rentedDays >= 0)
    {
        m_data.m_renterId = n_renterId;
        m_data.m_rentedDays = n_rentedDays;
        m_data.m_isRented = true;
        time(&m_data.m_startRentDate);
        return true;
    }
    return false;
}

void Videotape::returned()
{
    m_data.m_startRentDate = 0;
    m_data.m_renterId = -1;
    m_data.m_rentedDays = -1;
    m_data.m_isRented = false;
}

void Videotape::printVideoData(void)
{
    if (m_data.m_isRented)
    {
        std::cout << "id: " << m_data.m_id
                  << "\ntitle: " << m_data.m_videoTitle
                  << "\nis rented by: " << m_data.m_renterId
                  << "\nfor: " << m_data.m_rentedDays << " days" << std::endl;
    }
    else
    {
        std::cout << "id: " << m_data.m_id
                  << "\ntitle: " << m_data.m_videoTitle
                  << "\nis not rented " << std::endl;
    }
}

Videotape::VideotapeData Videotape::videotypeData()
{
    return m_data;
}
