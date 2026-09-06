#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int tempArr[n];
    for (int i = 0; i < n; i++)
    {
        tempArr[n - i - 1] = arr[i];
    }
    for (int i = 0; i < n; ++i)
    {
        arr[i] = tempArr[i];
    }
}

int main()
{

    int arr[] = {1, 3, 2, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, n);
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}