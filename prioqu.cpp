#include <bits/stdc++.h>
using namespace std;

int main()
{
    // priority_queue functions -> push(), pop(), top(), size(), empty()
    // priority_queue<int> pq; // it stores all elements in a sorted manner and t.c -> O(log(N))
    // It keeps the maximum element right at the top.. (PRIORITY)
    // pq.push(1);
    // pq.push(10);
    // pq.push(14);
    // pq.push(111);
    // cout << pq.top() << endl;
    // pq.pop();
    // cout << pq.top() << endl;

    // priority_queue<pair<int, int>> pq1; // Get an ERROR while PUSHING

    //  To print minimum element at first ---> Method 1
    // priority_queue<int> prio;
    // prio.push(-2);
    // prio.push(-6);
    // prio.push(-9);
    // cout << (-1) * prio.top() << endl; // for getting the minimum ele at first

    //  To print minimum element at first ---> Method 2
    //  Minimum Priority Queue
    priority_queue<int, vector<int>, greater<int>> mpq;
    mpq.push(1);
    mpq.push(10);
    mpq.push(14);
    mpq.push(111);
    cout << mpq.top() << endl;
    mpq.pop();
    cout << mpq.top() << endl;

    // DEqueue

    deque<int> de;
    // push_back()
    // push_front()
    // pop_back()
    // pop_front()
    // begin(), end(), rbegin(), rend(), size(), empty(), at(), clear() etc. ----> will implement later on
}