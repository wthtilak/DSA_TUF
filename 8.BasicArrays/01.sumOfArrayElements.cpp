// #include <bits/stdc++.h>
#include<iostream>
using namespace std;

int sumOfArrayElements(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int arr[4] = {2, 4, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << sumOfArrayElements(arr, n);

    return 0;
}