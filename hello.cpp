#include <bits/stdc++.h>
using namespace std;

void say_hello(int n)
{
    if (n == 0)
    {
        return; // stopping case or, base case
    }
    say_hello(n - 1);
    cout << "hello"
         << " " << n << endl;
}

int main()
{
    say_hello(5);
}