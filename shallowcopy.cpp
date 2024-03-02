#include <iostream>
#include <string.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;
    char *name;

    Hero()
    {
        cout << "Default constructr called " << endl;
        name = new char[100];
    }

    // parametrized constructor called;
    Hero(int health)
    {
        this->health = health;
    }
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    void print()
    {
        cout << endl;
        cout << "( "
             << "Health is :- " << this->health << " , ";
        cout << "level is :- " << this->level << " , ";
        cout << "Name is :- " << this->name << " )";
        cout << endl;
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

    void setHealth(int h)
    {
        this->health = h;
    }

    void setLevel(char l)
    {
        this->level = l;
    }

    void setname(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{
    Hero h1;
    h1.setHealth(100);
    h1.setLevel('A');
    char name[6] = "rahul";
    h1.setname(name);

    h1.print();

    // using inbuilt default constructor
    Hero h2(h1);
    h2.print();

    h1.name[0] = 'm';
    h1.print();
    h2.print();
}