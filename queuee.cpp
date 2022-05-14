#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> qu;

    // all the operations take constant time -> O(1)
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(5);

    cout << qu.front() << endl;
    qu.pop();

    // taken linear time -> O(N)
    while (!qu.empty())
    {
        qu.pop();
    }
}