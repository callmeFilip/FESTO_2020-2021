#include "Videotape.h"

const Videotape &function(const Videotape &ptr)
{
    // ptr.setLength(5); // generates error
    ptr.getLength();

    return ptr;
}

int Videotape::getLength() const
{
    return m_length;
}

void Videotape::setLength(int length)
{
    m_length = length;
}

int main()
{
    Videotape vt;

    const Videotape &VTRef = function(vt); // warning can be ignored

    return 0;
}
