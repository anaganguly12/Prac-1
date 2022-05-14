#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "This is base class's print function \n";
    }

    virtual void display()
    {
        cout << "This is base class's display function \n";
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "This is derived class's print function \n";
    }

    void display()
    {
        cout << "This is derived class's display function \n";
    }
};
int main()
{
    Base *baseptr;
    Derived obj;
    baseptr = &obj;
    baseptr->print();
    baseptr->display();
    return 0;
}
