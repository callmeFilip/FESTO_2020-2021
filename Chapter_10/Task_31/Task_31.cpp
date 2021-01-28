#include <iostream>
#include "PrinterConnection.h"

int main()
{
    std::cout << PrinterConnection::instance()->getPrinterID() << std::endl;

    PrinterConnection::instance()->changePrinterConnection("Amd Radeon Printer");

    std::cout << PrinterConnection::instance()->getPrinterID() << std::endl;

    return 0;
}
