#include <iostream>
using namespace std;

void numberOfDigits()
{
    int count, num;
    cout << "Enter the number : ";
    cin >> num;

    while (num > 0)
    {
        num = num / 10;
        count++;
    }

    cout << count << endl;
}
void numberOfOddDigits()
{
    int count = 0;
    long long num;
    cout << "Enter number :";
    cin >> num;

    while (num > 0)
    {
        int ld = num % 10;
        num = num / 10;

        if (ld % 2 != 0)
            ++count;
    }
    cout << count << endl;
}
void reverseNumber()
{
    int num, newNum = 0;
    cout << "Enter the No. :";
    cin >> num;

    while (num != 0)
    {
        int ld = num % 10;
        newNum = newNum * 10 + ld;
        num /= 10;
    }
    cout << newNum << endl;
}

int main()
{

    // numberOfDigits();
    // numberOfOddDigits();
    reverseNumber();

    return 0;
}
