#ifndef PRINTERCONNECTION_H
#define PRINTERCONNECTION_H
#include <string>
class PrinterConnection
{
private:
    static PrinterConnection m_currentConnection;
    std::string m_printerID;

    PrinterConnection(std::string printerID_value = "unknown") : m_printerID(printerID_value) {}
    PrinterConnection(const PrinterConnection &);

public:
    static PrinterConnection *instance();
    std::string getPrinterID() const;

    void changePrinterConnection(std::string newPrinter);
};

#endif // PRINTERCONNECTION_H
