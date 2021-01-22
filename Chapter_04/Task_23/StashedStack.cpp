#include "StashedStack.h"
#include <fstream>
#include <vector>
StashedStack::StashedStack()
{
    m_stack.initialize();
}

StashedStack::~StashedStack()
{
    m_stack.cleanup();
}

void StashedStack::push(Stash *element)
{
    m_stack.push(element);
}

char *StashedStack::pop()
{
    Stash *result;

    result = (Stash *)m_stack.pop();

    return ((char *)result->at(0));
}

void StashedStack::fillFromFile(std::string path)
{
    Stash *fiveRowsStash;

    std::ifstream write(path);
    std::string bufferString;
    std::string fiveRows = "";
    int rowCounter = 0;

    std::vector<std::string> reverser;

    //getting lines from test.txt and saving them into stash elements
    while (getline(write, bufferString))
    {
        rowCounter++;
        fiveRows += bufferString + "\n";

        //every 5th row
        if (rowCounter == 5)
        {
            //adds the fiveRows to a vector
            reverser.push_back(fiveRows);

            //zeroing
            rowCounter = 0;
            fiveRows = "";
        }
    }

    while (reverser.size() != 0)
    {
        //size is produced from the size of the content in vector's last element
        fiveRowsStash = new Stash(reverser[reverser.size() - 1].size());

        //adding five rows from the text file to a stash
        fiveRowsStash->add(reverser[reverser.size() - 1].c_str());

        m_stack.push(fiveRowsStash); // filling the storage with the stash created

        //removing last element from vector
        reverser.pop_back();
    }
}
