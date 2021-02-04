#ifndef HEADER_H
#define HEADER_H
struct Stack
{
    struct Link
    {
        void *data;
        Link *next;
        void initialize(void *dat, Link *nxt);
    } * head;

    Link *startingHead;

    ~Stack();

    void initialize();
    void push(void *dat);
    void *peek();
    void *pop();
    void cleanup();
};

struct Stash
{
    /* data */
    int m_size;     //size of each element
    int m_quantity; // number of elements
    int m_next;     //next empty space

    unsigned char *m_storage; //starting point of storage

    //constructors and destructors

    Stash();    //default sets the type to char-size
    Stash(int); //sets the type to the size given
    ~Stash();   //cleanup

    //methods
    unsigned int add(const void *element);
    void *at(int index);
    int length();
    bool inflate(int increase);
};

#endif