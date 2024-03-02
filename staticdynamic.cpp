#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;
    // getter and setter
    void setLevel(char ch)
    {
        level = ch;
    }

    void setHealth(int h)
    {
        health = h;
    }

    char getLevel()
    {
        return level;
    }

    int getHealth()
    {
        return health;
    }
};

int main()
{
    // static allocation
    Hero h1;
    h1.setHealth(100);
    h1.setLevel('A');

    cout << "Health of hero h1 is : " << h1.getHealth() << endl;
    cout << "Level of hero h1 is : " << h1.getLevel() << endl;

    // dynamic allocation
    Hero *h2 = new Hero;
    (*h2).setHealth(90);
    (*h2).setLevel('B');

    // one way
    cout << "Health of hero h2 is : " << (*h2).getHealth() << endl;
    cout << "Level of hero h2 is : " << (*h2).getLevel() << endl;

    // another way
    cout << "Health of hero h2 is : " << h2->getHealth() << endl;
    cout << "Level of hero h2 is : " << h2->getLevel() << endl;
}