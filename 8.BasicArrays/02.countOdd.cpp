#include <iostream>
using namespace std;

int countOdd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
            ++count;
    }

    return count;
}

int main()
{

    int arr[] = {1, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << countOdd(arr, n);

    return 0;
}