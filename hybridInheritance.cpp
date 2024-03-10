#include <iostream>
using namespace std;

// hybrid inheritance combination of more than one inheritance

// Hierarchical inheritance
class A
{
public:
    void func1()
    {
        cout << "Inside function class A" << endl;
    }
};

class D
{
public:
    void func2()
    {
        cout << "Inside function class D" << endl;
    }
};

class B : public A
{
public:
    void funcB()
    {
        cout << "Inherited from A" << endl;
    }
};

// Multipe inheritance
class C : public A, public D
{
public:
    // Calling the functions of Class A and class D
    void func()
    {
        cout << "Inherited from more than one parent class" << endl;
    }
};
int main()
{
    C objectC;
    objectC.func();
    objectC.func1();
    objectC.func2();
}