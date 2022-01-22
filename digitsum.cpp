#include <bits/stdc++.h>
using namespace std;
int sum_digits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int remaining = n / 10;
    int lastDigit = n % 10;
    return sum_digits(remaining) + lastDigit;
}
int main()
{
    // cout << sum_digits(47957);

    int n;
    cin >> n;

    int lastdigit, sum = 0;
    while (n > 0)
    {
        lastdigit = n % 10;
        sum += lastdigit;
        n = n / 10;
    }
    cout << sum << endl;
}