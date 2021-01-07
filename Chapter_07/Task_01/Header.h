#ifndef HEADER_H
#define HEADER_H
#include <string>
class Text
{
    std::string holder; //string object to hold the text of a file
public:
    Text();
    Text(std::string filename);

    std::string contents();
};

#endif
