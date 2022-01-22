#include <iostream>
using namespace std;
void reverseArray(int i, int arr[], int n)
{
    if (i >= (n / 2))
    {
        return;
    }
    int temp;
    temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;

    reverseArray(i + 1, arr, n);
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int arr[] = {1, 9, 5, 3, 4, 7, 8};
    printArray(arr, 7);
    reverseArray(0, arr, 7);
    cout << "Reversed array is: " << endl;
    printArray(arr, 7);
    return 0;
}