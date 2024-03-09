#include <iostream>
using namespace std;

// Multiple Inheritance is a feature of C++ where a class can inherit from more than one class. i.e one subclass is inherited from more than one base class.

// base class 1
class Animal
{
public:
    int legsCount;
    int age;
    int weight;

public:
    void bark()
    {
        cout << "barking " << endl;
    }
};

// base class 2
class Human
{
public:
    int height;
    string color;

public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

//derrived class derrived from more tha one base class
class Hybrid : public Animal , public Human{

};

int main()
{
    Hybrid H1;
    H1.bark();
    H1.speak();
}