#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void funcA()
    {
        cout << "Func A \n";
    }

private:
    int b;
    void funcB()
    {
        cout << "Func B \n";
    }

protected:
    int c;
    void funcC()
    {
        cout << "Func C \n";
    }
};
int main()
{
    A obj1;
    obj1.funcA();
    // obj1.funcB(); /-it gives us error because it is private/-
    return 0;
}