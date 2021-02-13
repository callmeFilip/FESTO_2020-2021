#include "Counted.h"

int main()
{
    const int ARRLEN = 5;

    Counted *arr = new Counted[ARRLEN]();

    delete arr; // delete calls the destructor and frees the
                // memory of the address which was passed to it.
                // Since this is array, it has more than one
                // address to clear, and that's why we should use
                // delete[] instead of delete.

    return 0;
}
