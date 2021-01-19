#include "require.h"
#define IFOPEN(VAR, NAME)    \
    std::ifstream VAR(NAME); \
    assure(VAR, NAME);

int main(int argc, char const *argv[])
{
    IFOPEN(in, "dummy.txt");

    printf("End..");

    return 0;
}
