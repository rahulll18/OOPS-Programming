#include <iostream>
using namespace std;

// Single Inheritance: In single inheritance, a class is allowed to inherit from only one class. i.e. one subclass is inherited by one base class only.

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

// subclass
class Dog : public Animal
{
};

int main()
{
    Dog D1;

    // inherited properties from base class
    D1.legsCount = 4;
    cout << D1.legsCount << endl;

    D1.run();
}