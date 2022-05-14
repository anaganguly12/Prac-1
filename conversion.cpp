#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int binarytoDecimal(int n)
{
    int rem, dec = 0, i = 0;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;

        dec += (rem * pow(2, i));
        i++;
    }
    return dec;
}

int decimaltoBinary(int n)
{
    int rem, bin = 0, i = 1;
    while (n != 0)
    {
        rem = n % 2;
        n /= 2;

        bin += rem * i;
        i *= 10;
    }
    return bin;
}

int main()
{
    // Binary to decimal
    int b, d;
    cout << "Enter a binary number: " << endl;
    cin >> b;
    cout << "Enter a decimal number: " << endl;
    cin >> d;

    cout << "The decimal form of " << b << " is: " << binarytoDecimal(b) << endl;
    cout << "The binary form of " << d << " is: " << decimaltoBinary(d) << endl;
}