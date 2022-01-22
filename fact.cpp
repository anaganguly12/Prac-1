#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int ans;
    ans = n * fact(n - 1);
    return ans;
}

int main()
{
    // factorial
    int n;
    cin >> n;

    // Iterative approach
    /*int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact = fact * i;
    }*/
    int factorial = fact(n);
    cout << factorial << endl;
}