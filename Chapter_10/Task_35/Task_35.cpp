extern "C" int puts(const char *str);

int main()
{
    const char *text = "This is some text";

    puts(text);

    return 0;
}