#include <fstream>
#include <iostream>

#include "Header.h"

Text::Text()
{
    holder = "";
}

Text::Text(std::string filename)
{
    holder = "";

    std::ifstream input;

    //open file
    input.open(filename);
    if (input.fail())
    {
        std::cout << "Invalid filepath!" << std::endl;
        return;
    }

    //retrieving each line and adding it to holder
    std::string line;
    while (getline(input, line))
    {
        holder.append(line);
    }
}

std::string Text::contents()
{
    return holder;
}

int main()
{
    Text textObj("text.txt");

    std::cout << textObj.contents() << std::endl;

    return 0;
}
