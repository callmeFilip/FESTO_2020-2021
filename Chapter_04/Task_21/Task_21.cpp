#include <iostream>
//enums
typedef enum
{
    red,
    green
} Colors;

enum Colors2
{
    yellow,
    blue
};

//unions
typedef union
{
    char c;
    int a;
    double b;

} BlockOfMemory;

union BlockOfMemory2
{
    char c;
    int a;
    double b;
};

//structs
typedef struct
{
    int height;
    int width;
} Building;

struct Building2
{
    int height;
    int width;
};

int main()
{
    //demonstration for union

    BlockOfMemory var1;
    var1.b = 2.3246532456252;
    var1.c = 'd';
    var1.a = 24;

    std::cout << var1.b << var1.c << var1.a << std::endl;
    std::cout << sizeof(var1) << std::endl;

    BlockOfMemory2 var2;
    var2.b = 2.3246532456252;
    var2.c = 'd';
    var2.a = 24;

    std::cout << var2.b << var2.c << var2.a << std::endl;
    std::cout << sizeof(var2) << std::endl;

    //demonstration for enum
    std::cout
        << red << " " << yellow << std::endl;

    //demonstration for struct
    Building house;
    house.height = 5;
    house.width = 10;

    Building2 house2;
    house2.height = 5;
    house2.width = 10;

    std::cout << house.height << " " << house2.height << std::endl;

    return 0;
}