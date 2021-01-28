#include "PrinterConnection.h"

PrinterConnection PrinterConnection::m_currentConnection("Random Printer Model");

void PrinterConnection::changePrinterConnection(std::string newPrinter)
{
    m_printerID = newPrinter;
}

std::string PrinterConnection::getPrinterID() const
{
    return m_printerID;
}

PrinterConnection *PrinterConnection::instance()
{
    return &m_currentConnection;
}

PrinterConnection::PrinterConnection(const PrinterConnection &)
{
}