#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    // default constructor
    Hero()
    {
        cout << "Defalut Constructor callled " << endl;
    }

    // parematerized constructor
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
        cout << "parematerized constructor" << endl;
    }

    void display()
    {
        cout << "Health is :- " << health << endl;
        cout << "level is :- " << level << endl;
    }

    //  getter and setter
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
    Hero h1(100 , 'A');
    h1.display();

    // dynamic allocation
    Hero *h2 = new Hero(200 , 'B');
    h2->display();

    Hero h3;
    h3.display();
}