#include <bits/stdc++.h>
using namespace std;

namespace anna
{
    int val = 50;

    int getVal()
    {
        return val * 10;
    }
}
int main()
{
    double val = 22.9;
    cout << val << endl; // prints 22.9

    cout << anna::val << endl; // prints 50
    cout << anna::getVal() << endl;
}