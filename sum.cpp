#include <bits/stdc++.h>
using namespace std;

// Trust the function
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int left = sum(n - 1);
    return left + n;
}

int main()
{
    cout << sum(5) << endl;
}