#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int ans2, ans1;

    ans2 = fib(n - 2);
    ans1 = fib(n - 1);

    return ans2 + ans1;
}
int main()
{
    int n;
    cin >> n;

    int ans = fib(n);

    cout << ans << endl;
}