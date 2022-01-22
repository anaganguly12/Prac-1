#include <bits/stdc++.h>
using namespace std;
void Search(vector<int> v, int key)
{
    int left = 0;
    int length = v.size();
    int pos = -1;
    int right = length - 1;

    for (left = 0; left <= right;)
    {
        if (v[left] == key)
        {
            pos = left;
            cout << "Element found at " << pos + 1 << " index"
                 << " with" << left + 1 << " attempt" << endl;
            break;
        }
        if (v[right] == key)
        {
            pos = right;
            cout << "Element found at " << pos + 1 << " index"
                 << " with " << length - right << " attempt" << endl;
            break;
        }
        left++;
        right--;
    }
    if (pos == -1)
    {
        cout << "ELement isn't found with " << left << " attempt" << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the size of the vector: " << endl;
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements of the vector: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int key;
    cout << "Enter the key: " << endl;
    cin >> key;

    Search(v, key);
}