#include <iostream>
using namespace std;

class A
{
public:
    void Afunc()
    {
        cout << "FuncA\n";
    }
};
class B : public A
{
public:
    void Bfunc()
    {
        cout << "FuncB\n";
    }
};
class C : public B
{
public:
};

int main()
{
    C c;
    c.Afunc();
    c.Bfunc();
    return 0;
}