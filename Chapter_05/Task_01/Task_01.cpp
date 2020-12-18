#include <iostream>
#include "Struct.h"

void Structure::init()
{
    std::cout << "init" << std::endl;
}

void Structure::sum()
{
    std::cout << "sum" << std::endl;
}

void Structure::inflate()
{
    std::cout << "inflate" << std::endl;
}

int main()
{
    Structure foo;

    foo.name = 'd'; // no error

    //foo.price = 2.5;
    /*
    Task_01.cpp: In function 'int main()':
    Task_01.cpp:8:9: error: 'double Structure::price' is protected within this context
        8 |     foo.price = 2.5;
          |         ^~~~~
    In file included from Task_01.cpp:1:
    Struct.h:9:12: note: declared protected here
        9 |     double price;
    */

    //foo.age = 25;
    /*
    Task_01.cpp: In function 'int main()':
    Task_01.cpp:8:9: error: 'int Structure::age' is private within this context
        10 |     foo.age = 25;
          |         ^~~
    In file included from Task_01.cpp:1:
    Struct.h:6:9: note: declared private here
        6 |     int age;    
    */

    foo.init(); // no error

    //foo.sum();
    /*
    Task_01.cpp: In function 'int main()':
    Task_01.cpp:49:13: error: 'void Structure::sum()' is protected within this context
        49 |     foo.sum();
    Task_01.cpp:9:6: note: declared protected here
        9 | void Structure::sum()
    */

    //foo.inflate();
    /*
    Task_01.cpp: In function 'int main()':
    Task_01.cpp:58:17: error: 'void Structure::inflate()' is private within this context
     58 |     foo.inflate();
        |                 ^
    Task_01.cpp:14:6: note: declared private here
        14 | void Structure::inflate()
    */

    return 0;
}