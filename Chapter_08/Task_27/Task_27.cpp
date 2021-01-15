#include "Header.h"

void Listener::v_increment() volatile
{
    data++;
}

void Listener::increment()
{
    data++;
}

Listener::Listener() : data(0) {}

int main()
{
    Listener obj;

    obj.increment();
    obj.v_increment();

    volatile Listener v_obj;

    v_obj.v_increment();
    //! v_obj.increment(); //error: passing 'volatile Listener' as 'this' argument discards qualifiers

    return 0;
}
