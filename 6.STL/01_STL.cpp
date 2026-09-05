#include <bits/stdc++.h>
using namespace std;

void makePair()
{

    pair<int, int> pr1 = {2, 6};
    cout << pr1.first << " " << pr1.second << endl;

    pair<int, char> pr2 = {4, 'f'};
    cout << pr2.first << " " << pr2.second << endl;

    pair<pair<int, char>, int> pr3 = {{3, 'a'}, 55};
    cout << pr3.first.second << " " << pr3.second << endl;
}

int main()
{
    makePair();
    // cout << "Hello World .!";
    return 0;
}