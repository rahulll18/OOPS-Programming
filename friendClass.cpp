#include <iostream>
using namespace std;

class GFG
{
private:
    int private_variable;

protected:
    int protected_variable;

public:
    GFG()
    {
        private_variable = 10;
        protected_variable = 99;
    }

    // friend class declaration
    friend class F;
};

// class F can access private and protected member of the class GFG.
class F
{
public:
    void display(GFG &t)
    {
        cout << "priavte_member is :" << t.private_variable << endl;
        cout << "protected_member is :" << t.protected_variable << endl;
    }
};

int main()
{
    GFG gfg;
    F f;
    f.display(gfg);
}