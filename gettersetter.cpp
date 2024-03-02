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
    Hero h1;
    cout << "size of object : " << sizeof(h1) << endl;
    h1.setLevel('A');
    h1.setHealth(100);

    cout << "Level is : " << h1.getLevel() << endl;
    cout << "Health is : " << h1.getHealth() << endl;
}