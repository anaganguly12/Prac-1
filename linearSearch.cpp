#include <iostream>
using namespace std;
int linearSearch(int *a, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Please enter the size of the array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Please enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Please enter the key: " << endl;
    cin >> key;

    int search;
    search = linearSearch(arr, n, key);
    if (search != -1)
    {
        cout << "The position of " << key << " is: " << search + 1 << endl;
    }
    else
    {
        cout << key << " isn't found" << endl;
    }
    return 0;
}