#include "Contact.h"

int findLength(const char *charArray)
{
    int wordSize = 0;

    while (charArray[wordSize] != '\0')
    {
        wordSize++;
    }
    wordSize++;

    return wordSize;
}

Contact::Contact(const char *firstNameInitValue, const char *lastNameInitValue)
    //setting strings
    : firstName_string(firstNameInitValue),
      lastName_string(lastNameInitValue)
{
    //setting length
    firstName_size = findLength(firstName_string);
    lastName_size = findLength(lastName_string);

    //setting indexes
    int initIndex = 0;
    firstName_index = initIndex;
    lastName_index = initIndex++;
}

const char *Contact::lookup(const int &index)
{
    switch (index)
    {
        //firstName
    case 0:
        return firstName_string;
        break;

        //lastName
    case 1:
        return lastName_string;
        break;
    }

    return 0;
}

int main()
{
    Contact obj("Petar", "Petrov");

    const char *textHolder = 0;
    textHolder = obj.lookup(0); // textHolder = "Petar"
    textHolder = obj.lookup(1); // textHolder = "Petrov"

    delete textHolder;

    return 0;
}
