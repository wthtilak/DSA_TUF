#include <iostream>
using namespace std;

bool arraySortedOrNot(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{

    int arr[] = {1, 2, 0, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << arraySortedOrNot(arr, n) << endl;//false

    return 0;
}