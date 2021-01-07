#include <iostream>

int main()
{
    int i;
    for (i = 0; i <= 10; i++)
    {
        std::cout << i << std::endl;
    }

    for (int i = 0; i <= 10; i++)
    {
        std::cout << i << std::endl;
    }

    std::cout << i << std::endl;

    return 0;
    /* result:
0
1
2
3
4
5
6
7
8
9
10
0
1
2
3
4
5
6
7
8
9
10
11
*/
}