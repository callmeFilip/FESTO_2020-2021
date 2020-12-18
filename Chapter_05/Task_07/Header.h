#ifndef HEADER_H
#define HEADER_H
#include <iostream>

class Hen
{
public:
    class Nest
    {
    public:
        class Egg
        {
            //members
            int size;

        public:
            //constructors
            Egg();

            //methods
            void display();

            //friends
            friend Nest;
        };

    private:
        //members
        int rooms;
        Egg egg;

    public:
        //constructors
        Nest();

        //methods
        void display();

        //friends
        friend Hen;
    };

    Nest nest;

    //methods
    void display();
};

#endif