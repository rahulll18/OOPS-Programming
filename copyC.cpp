#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    int height;
    char level;

    // default constructor called
    Hero()
    {
        cout << "Default constructor callled" << endl;
    }

    // paramaterized called
    Hero(int health, char level)
    {
        cout << "p Constructor called" << endl;
        this->health = health;
        this->level = level;
    }

    // copy constructor called
    Hero(Hero &temp)
    {
        cout << "copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void display()
    {
        cout << "Health is :- " << health << endl;
        cout << "Level is :- " << level << endl;
    }

    void setHealth(int h)
    {
        this->health = h;
    }

    void setLevel(char l)
    {
        this->level = l;
    }
    // another way to get data
    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void print()
    {
        cout << "health is :- " << this->health << endl;
        cout << "level is :- " << this->level << endl;
    }
};

int main()
{
    Hero h1(100, 'A');
    h1.display();

    Hero h2;
    h2.setHealth(200);
    h2.setLevel('B');

    cout << "Hero 2 health is :- " << h2.getHealth() << endl;
    cout << "Hero 2 level is :- " << h2.getLevel() << endl;

    // copying object or copy constructor called

    Hero h3(h1);
    h3.print();
}