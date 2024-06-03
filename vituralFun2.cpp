#include <iostream>
using namespace std;

// base class
class Animal
{
public:
    virtual void Eat()
    {
        cout << "Animal Eating" << endl;
    }
};

// derrived Class 1
class Dog : public Animal
{
public:
    void Eat()
    {
        cout << "I am eating dog Food" << endl;
    }
};

// derrived Class 2
class Cat : public Animal
{
public:
    void Eat()
    {
        cout << "I am eating cat Food" << endl;
    }
};

int main()
{
    Animal *ptr;
    Dog myDog;
    Cat myCat;

    ptr = &myDog;
    ptr->Eat();

    ptr = &myCat;
    ptr->Eat();
}