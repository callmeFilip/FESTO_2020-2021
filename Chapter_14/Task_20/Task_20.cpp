class SpaceShip
{
private:
public:
    SpaceShip() {}
    void fly() {}
};

class Shuttle : public SpaceShip
{
private:
public:
    void land();
};

void upcast(SpaceShip &ref)
{
    ref.land(); // This is cast to SpaceShip, and SpaceShips
                // don't have land() method.
}

int main()
{
    Shuttle shuttle;
    upcast(shuttle);

    return 0;
}
