#include <iostream>
using namespace std;

class AnanyaGanguly
{
public:
    // Function Overloading
    void fun()
    {
        cout << "I am a function with no arguments" << endl;
    }

    void fun(int x)
    {
        cout << "I am a function with int arguments" << endl;
    }

    void fun(double x)
    {
        cout << "I am a function with double arguments" << endl;
    }
};

int main()
{
    AnanyaGanguly obj1;
    obj1.fun();
    obj1.fun(12);
    obj1.fun(6.12);
    return 0;
}