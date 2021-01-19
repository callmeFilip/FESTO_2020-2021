#ifndef CONTACT_H
#define CONTACT_H

#define FIELD(a)            \
    const char *a##_string; \
    int a##_size;           \
    int a##_index

class Contact
{
private:
    FIELD(firstName);
    FIELD(lastName);

public:
    Contact(const char *firstNameInitValue = "First name not set", const char *lastNameInitValue = "Last name not set");
    const char *lookup(const int &index);
};

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

#endif
