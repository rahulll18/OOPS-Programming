#include <iostream>
using namespace std;

class Hero
{
private:
    int Health;

public:
    int height;
    char level;

    // paramaterized called
    Hero(int health, char level)
    {
        cout << "p1 Constructor called" << endl;
        this->Health = health;
        this->level = level;
    }

    Hero(int health, char level, int height)
    {
        cout << "p2 Constructor called" << endl;
        this->Health = health;
        this->level = level;
        this->height = height;
    }

    // one way to display or get data
    void Display()
    {
        cout << "Health is : " << Health << endl;
        cout << "level is : " << level << endl;
        cout << "height is : " << height << endl;
    }

    // another way to get data
    int getHealth()
    {
        return Health;
    }

    char getLevel()
    {
        return level;
    }
};

int main()
{
    Hero h1(100, 'A');
    cout << "helath is :- " << h1.getHealth() << endl;
    cout << "level is :- " << h1.getLevel() << endl;

    Hero h3(150, 'B', 210);
    h3.Display();
}