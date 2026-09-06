#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
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