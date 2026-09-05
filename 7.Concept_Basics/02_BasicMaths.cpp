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
int reverseNumber(int num)
{
    int revNum = 0;

    while (num != 0)
    {
        int lastDigit = num % 10;
        revNum = revNum * 10 + lastDigit;
        num /= 10;
    }
    return revNum;
}
bool Palindrome(int num)
{
    int revNumber = reverseNumber(num);
    return (num == revNumber);
}

int main()
{

    // numberOfDigits();
    // numberOfOddDigits();
    // int ans = reverseNumber(3452);
    // cout << ans<<endl;
    // PalindromeNumber();
    //cout << Palindrome(434);
    return 0;
}
