#include <iostream>
#include "PrinterConnection.h"

int main()
{
    std::cout << PrinterConnection::instance()->getPrinterID() << std::endl;

    return 0;
}
