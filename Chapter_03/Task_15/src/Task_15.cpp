#include "../inc/Person.h"

int main()
{
    Person player;

    player.m_firstName = "Ivan";
    player.m_lastName = "Bratan";
    player.m_age = 170;

    player.print();

    Person* ptr_player = &player;

    ptr_player->m_age = 27;
    ptr_player->m_firstName = "Mario";
    ptr_player->m_lastName = "Bratanov";

    ptr_player->print();


    return 0;

}
