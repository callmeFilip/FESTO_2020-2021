#ifndef CONTACT_H
#define CONTACT_H

#define FIELD(a)                                \
    const char *a##_string;                     \
    int a##_size;                               \
                                                \
public:                                         \
    const char *get##a##_string() const         \
    {                                           \
        return a##_string;                      \
    }                                           \
                                                \
    int get##a##_size() const                   \
    {                                           \
        return a##_size;                        \
    }                                           \
                                                \
    void set##a##_string(const char *newString) \
    {                                           \
        a##_string = newString;                 \
    }                                           \
                                                \
    void set##a##_size(int size)                \
    {                                           \
        a##_size = size;                        \
    }                                           \
                                                \
private:

class Contact
{
private:
    FIELD(firstName);
    FIELD(lastName);

public:
    //getters and setters
};

#undef FIELD
#endif
