#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    // Push and emplace
    // Pop
    // Top
    // size
    // empty

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;

    while (!st.empty())
    {
        st.pop();
    }

    // if (st.empty())
    // {
    //     cout << "Stack is empty \n";
    // }
    // else
    // {
    //     cout << "Stack isn't empty \n";
    // }

    stack<int> stk;

    if (!stk.empty())
    {
        cout << stk.top() << endl;
    } // if stack is empty then stk.top() gives you an error so you have to check that the stack is empty or not
}