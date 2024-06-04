#include <iostream>
using namespace std;

class MyBase
{
private:
    int value1;
    int value2;

public:
    MyBase()
    {
        this->value1 = 10;
        this->value2 = 20;
    }

    void display()
    {
        cout << "First Value is :- " << this->value1 << endl;
        cout << "Second Value is :- " << this->value2 << endl;
    }

    // friend function to acess private and protected data members of the class
    // prototype defined in the class
    friend void addValues(MyBase &B);
};

// implentation of the friend defined outside the class
void addValues(MyBase &B)
{
    cout << "Total values is :- " << B.value1 + B.value2 << endl;
}

int main()
{
    MyBase Base;
    Base.display();

    addValues(Base);
}