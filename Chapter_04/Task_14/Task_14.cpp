#include "Header.h"
#include <iostream>
#include <assert.h>

using namespace std;

//Videotape definitions
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

//Stack definitions
void Stack::Link::initialize(void *dat, Link *nxt)
{
    data = dat;
    next = nxt;
}
void Stack::initialize()
{
    head = 0;
}
void Stack::push(void *dat)
{
    Link *newLink = new Link;
    newLink->initialize(dat, head);
    head = newLink;
}
void *Stack::peek()
{
    if (head == 0)
    {
        cout << "Stack empty" << endl;

        return nullptr;
    }
    else
    {
        return head->data;
    }
}
void *Stack::pop()
{
    if (head == 0)
        return 0;
    void *result = head->data;
    Link *oldHead = head;
    head = head->next;
    delete oldHead;
    return result;
}
void Stack::cleanup()
{
    if (head != 0)
    {
        cout << "Stack not empty" << endl;
    }
}

//main
int main()
{
    Stack videoStack;
    videoStack.initialize();

    Videotape *vid_Titanic = new Videotape(1, "Titanic");
    Videotape *vid_AllibiCom = new Videotape(2, "Allibi.com");
    Videotape *vid_Buffer;

    videoStack.push(vid_Titanic);
    videoStack.push(vid_AllibiCom);

    while (videoStack.head != 0)
    {
        vid_Buffer = (Videotape *)videoStack.pop();

        vid_Buffer->printVideoData();
    }

    videoStack.cleanup();

    delete vid_Titanic;
    delete vid_AllibiCom;

    return 0;
}
