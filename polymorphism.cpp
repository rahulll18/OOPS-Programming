#include <iostream>
using namespace std;

// compile time polymorphism
class Maths
{
public:
    // function overloading
    void sayHello()
    {
        cout << "Hello , I am a Rahul" << endl;
    }

    void sayHello(string fname, string lname)
    {
        cout << "Hello , I am a " << fname << lname << endl;
    }

    void sayHello(string name)
    {
        cout << "Hello , I am a " << name << endl;
    }
};

class B{
public:
    //operator overloading
    int a , b;

    void  operator + (B &obj){
        int val1 = this->a;
        int val2 = obj.a;
        cout << "Output is :- " << val2 - val1 << endl;
    }

    void operator() () 
    {
        cout << "I am Bracket with value is :- " << this->a << endl;
    }
};

int main()
{
    Maths m1;
    m1.sayHello();
    m1.sayHello("Rohan", "Avhad");
    m1.sayHello("Harshal");


    B obj1 , obj2;
    obj1.a = 4;
    obj2.a = 7;

    //current obj + input parameter obj
    obj1 + obj2;

    // () operator overloading
    obj1();
    obj2();
}