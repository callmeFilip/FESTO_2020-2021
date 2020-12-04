#include "Videotape.h"
#include <iostream>

Videotape::Videotape()
{
    m_id = -1;
    m_renterId = -1;
    m_rentedDays = -1;
    m_videoTitle = "unidentified";
    m_isRented = false;
}

Videotape::Videotape(int n_id, std::string n_videoTitle)
{
    m_id = n_id;
    m_renterId = -1;
    m_rentedDays = -1;
    m_videoTitle = n_videoTitle;
    m_isRented = false;
}

bool Videotape::setRent(int n_renterId, int n_rentedDays)
{
    if (n_renterId >= 0 && n_rentedDays >= 0)
    {
        m_renterId = n_renterId;
        m_rentedDays = n_rentedDays;
        m_isRented = true;
        return true;
    }
    return false;
}

void Videotape::printVideoData(void)
{
    if (m_isRented)
    {
        std::cout << "id: " << m_id
                  << "\ntitle: " << m_videoTitle
                  << "\nis rented by: " << m_renterId
                  << "\nfor: " << m_rentedDays << " days" << std::endl;
    }
    else
    {
        std::cout << "id: " << m_id
                  << "\ntitle: " << m_videoTitle
                  << "\nis not rented " << std::endl;
    }
}
