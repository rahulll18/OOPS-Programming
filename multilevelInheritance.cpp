#include <iostream>
using namespace std;

// In this type of multilevel inheritance, a derived class is created from another derived class.

// base class
class Animal
{
public:
    int legsCount;
    int age;
    int weight;

public:
    void run()
    {
        cout << "Animal is running " << endl;
    }
};

// derrived class 1
class Dog : public Animal
{
};

// derived from another derrived class
class germanShephard : public Dog
{
};

int main()
{
    germanShephard G1;
    G1.weight = 105;
    cout << G1.weight << endl;

    G1.run();
}