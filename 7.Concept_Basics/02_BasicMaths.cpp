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
        int lastDigit = num % 10;
        num = num / 10;

        if (lastDigit % 2 != 0)
            ++count;
    }
    cout << count << endl;
}
void reverseNumber()
{
    int num, revNum = 0;
    cout << "Enter the No. :";
    cin >> num;

    while (num != 0)
    {
        int lastDigit = num % 10;
        revNum = revNum * 10 + lastDigit;
        num /= 10;
    }
    cout << revNum << endl;
}

int main()
{

    // numberOfDigits();
    // numberOfOddDigits();
    reverseNumber();

    return 0;
}
