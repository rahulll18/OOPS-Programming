#include <iostream>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "I am A" << endl;
    }
};

class B
{
public:
    void func()
    {
        cout << "I am B" << endl;
    }
};

class C : public A, public B
{
public:
    void func()
    {
        cout << "I am C" << endl;
    }
};

int main()
{
    C objectC;

    // Ambiguty resolved using scope resolution operator
    objectC.A ::func();
    objectC.B ::func();
    objectC.C ::func();
}