void function(float number)
{
    const float &holder = number;
    //holder++; //Error
}

int main()
{
    function(2.5f);
    return 0;
}
