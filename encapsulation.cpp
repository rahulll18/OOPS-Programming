#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;
    int height;

public:
    // constructor
    Student(string name, int age, int height)
    {
        this->age = age;
        this->name = name;
        this->height = height;
    }

    // setter
    void setAge(int age)
    {
        this->age = age;
    }

    void setHeight(int height)
    {
        this->height = height;
    }

    void setName(string name)
    {
        this->name = name;
    }

    // getter
    int getAge()
    {
        return this->age;
    }

    int getHeight()
    {
        return height;
    }

    string getName()
    {
        return name;
    }
};

int main()
{
    Student one("Santosh", 20, 172);
    cout << "Name is :- " << one.getName() << endl;
    cout << "Age is :- " << one.getAge() << endl;
    cout << "Height is :- " << one.getHeight() << endl;
}