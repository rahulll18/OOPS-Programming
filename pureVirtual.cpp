#include <iostream>
using namespace std;

// base class
class Shape
{
public:
    // pure virtual function
    virtual void getArea() = 0;
};

// derived class 1
class Circle : public Shape
{
public:
    void getArea()
    {
        cout << "Enter the radius :- ";
        int r;
        cin >> r;

        cout << "Area of circle is :- " << (3.14 * r * r) << endl;
    }
};

class Rectangle : public Shape
{
public:
    void getArea()
    {
        cout << "Enter the length and breadth :- ";
        int l , b;
        cin >> l >> b;
        cout << "Area of rectangle is :- " << (l * b) << endl;
    }
};

int main()
{
    // static
    Circle obj1;
    obj1.getArea();

    Rectangle obj2;
    obj2.getArea();
}