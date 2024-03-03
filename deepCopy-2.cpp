#include <iostream>
using namespace std;

class Box
{
private:
    int length;
    int *breadth;
    int height;

public:
    // default constructor called
    Box()
    {
        cout << "Default constructor called " << endl;
        // dynamic memory allocation
        breadth = new int;
    }

    //copy constructor called
    Box(Box &temp){
        this->length = temp.length;
        int *b = new int;
        *b = *(temp.breadth);
        this->breadth = b;
        this->height = temp.height;
    }

    void setDimenssion(int l, int b, int h)
    {
        this->length = l;
        *breadth = b;
        this->height = h;
    }

    void display()
    {
        cout << "length is :- " << this->length << endl;
        cout << "Breadth is :- " << *breadth << endl;
        cout << "Height is :- " << this->height << endl;
    }

    ~Box()
    {
        cout << "Destructor called " << endl;
        delete breadth;
    }
};

int main()
{
    Box box1;
    box1.setDimenssion(10, 20, 30);
    box1.display();

    Box box2 = box1;    // copy constructor called
    box2.display();
}