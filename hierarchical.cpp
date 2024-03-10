#include <iostream>
using namespace std;

// In hierarchical inheritance one class serve as a parent for one or more than one base class

class A
{
public:
    void func1()
    {
        cout << "Inside Function 1" << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "Inside function 2" << endl;
    }
};

class C : public A
{
public:
    void func3()
    {
        cout << "Inside Function 3" << endl;
    }
};

int main()
{
    A object1;
    object1.func1();

    B object2;
    object2.func1();
    object2.func2();

    C object3;
    object3.func1();
    object3.func3();
}