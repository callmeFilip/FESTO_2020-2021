#include "require.h"

int main(int argc, char const *argv[])
{
    requireArgs(argc, 2);

    const int arg_int = atoi(argv[1]);
    require((arg_int > 5 && arg_int < 10), " The number must be between 5 and 10! ");

    const char *arg_fileName = argv[2];
    std::ifstream in(arg_fileName);
    assure(in, arg_fileName);

    printf(" Everything worked! ");

    return 0;
}
