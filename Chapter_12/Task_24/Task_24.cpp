#include "StringStorageStorage.h"
#include <iostream>

void StringStorageStorage::print() const
{
    m_storage.print();
}
void StringStorage::print() const
{
    std::cout << m_str << std::endl;
}

int main()
{
    StringStorage init("sdgdsa");
    StringStorageStorage storage(init);
    StringStorageStorage anotherStorage;
    StringStorageStorage thirdStorage(storage);

    anotherStorage = storage;

    storage.print();        // Should print "sdgdsa"
    anotherStorage.print(); // If all are equal => proper operator overload was created
    thirdStorage.print();   // If all are equal => proper copy-constructor was created

    return 0;
}
