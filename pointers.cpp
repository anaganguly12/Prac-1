// pointer is a variable that stores the address of another variable
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 34;
    int *j;
    j = &i;
    int **k;
    k = &j;
    cout << "The value of i is:" << i << endl;
    cout << "The value of i is:" << (*j) << endl;
    cout << "The value of i is:" << (*(&i)) << endl;

    cout << "The address of i is:" << (&i) << endl;
    cout << "The address of i is:" << j << endl;

    cout << "The address of j is:" << (&j) << endl;
    cout << "The value of j is:" << (*(&j)) << endl;

    cout << "The address of k is:" << (&k) << endl;
    cout << "The value of k is:" << (*(&k)) << endl;
}