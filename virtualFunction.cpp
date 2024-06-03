#include<iostream>
using namespace std;

class Mybase{
public:
    void show()
    {
        cout << "Base SHOWING" << endl;
    }

    virtual void print()
    {
        cout << "Base PRINTING" << endl;
    }
};

//derived class
class Myderived : public Mybase{
public:
    void show()
    {
        cout << "Derived SHOWING" << endl;
    }

    void print()
    {
        cout << "Derived PRINTING" << endl;
    }
};

int main()
{
    Mybase* baseptr;
    Myderived derived;

    baseptr = &derived;
    baseptr->show();
    baseptr->print();
}