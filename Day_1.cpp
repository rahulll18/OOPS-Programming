#include <iostream>
using namespace std;

class Hero
{
public:
    // data members or properties
    int health;
    char level;

    // member function or behaviour
    void printHealth();

    void printLevel()
    {
        cout << "level is :" << level << endl;
    }
};

void Hero::printHealth()
{
    cout << "health is :" << health << endl;
}

int main()
{
    // creation of object
    Hero hero1;
    hero1.health = 100;
    hero1.level = 'A';

    hero1.printHealth();
    hero1.printLevel();
}