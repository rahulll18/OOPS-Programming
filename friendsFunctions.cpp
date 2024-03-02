#include <iostream>
using namespace std;

class base
{
private:
    int private_variable;

protected:
    int protected_variable;

public:
    base()
    {
        private_variable = 10;
        protected_variable = 50;
    }

    //friends function declaration
    friend void display(base &b);
};

void display(base& b)
{
    cout << "private member is : " << b.private_variable << endl;
    cout << "protected member is : " << b.protected_variable << endl;
}

int main()
{
    base b;
    display(b);
}
