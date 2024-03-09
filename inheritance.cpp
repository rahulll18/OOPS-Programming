#include <iostream>
using namespace std;

class Human
{
public:
    int age;
    int height;
    int weight;

public:
    Human()
    {
        cout << "Default constructor " << endl;
    }

    Human(int age, int height, int weight)
    {
        this->age = age;
        this->height = height;
        this->weight = weight;
    }

    void walk()
    {
        cout << "Human is walking" << endl;
    }

    void dance()
    {
        cout << "Human is dancing " << endl;
    }

    // getter
    void setDetails(int age, int height)
    {
        this->age = age;
        this->height = height;
    }

    int getAge()
    {
        return this->age;
    }
    int getHeight()
    {
        return this->height;
    }
    int getWeight()
    {
        return this->weight;
    }
};

//inherited the properties from Human (paerent) class
class Male : public Human
{
public:
    string color;

public:
    void chessPlay()
    {
        cout << "Playing Chess " << endl;
    }
};

int main()
{
    Human h1(20, 172, 70);
    cout << "age is :- " << h1.getAge() << endl;
    cout << "height is :- " << h1.getHeight() << endl;
    cout << "weight is :- " << h1.getWeight() << endl;

    Male Male_1;
    Male_1.setDetails(32, 175);
    cout << "Height of male is :- " << Male_1.getHeight() << endl;
    cout << "Color is :- " << Male_1.color << endl;

}