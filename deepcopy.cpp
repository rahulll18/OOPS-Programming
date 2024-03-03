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
        cout << "default Construtor called" << endl;
        name = new char[100];
    }

    // copy constructor deep copy
    Hero(Hero &temp)
    {
        cout << "copy constructor called" << endl;
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        int health1 = temp.health;
        this->health = temp.health;
        this->level = temp.level;
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

    void setHealth(int health)
    {
        this->health = health;
    }

    void setLevel(char level)
    {
        this->level = level;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }
};

int main()
{
    Hero h1;
    h1.setHealth(100);
    h1.setLevel('A');
    char name[6] = "rahul";
    h1.setName(name);
    h1.print();

    Hero h2(h1);
    h2.print();

    h1.name[0] = 'n';
    h1.setHealth(50);
    h1.print();
    h2.print();

    // copy assignment operator
    h1 = h2;
    h1.print();
    h2.print();
}