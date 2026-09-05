#include <iostream>
#include <math.h>
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
int largestDigit(int num)
{
    int largest = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        if (lastDigit > largest)
            swap(lastDigit, largest);
        num /= 10;
    }
    return largest;
}
long factorial(long num)
{
    long factorial = 1;
    if (num == 0 || num == 1)
        return 1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    return factorial;
}
bool armStrongNumber(int num)
{
    if (num < 0)
        return false;
    if (num == 0)
        return true;

    int result = 0, count = (int)log10(num) + 1;
    int dupNum = num;
    while (num > 0)
    {
        int lastDigit = num % 10;
        result = result + pow(lastDigit, count);
        num /= 10;
    }

    return (dupNum == result);
}
bool perfectNumber(int n)
{
    // A perfect Number is a Number whose divisors sum up
    // to the number itself excuding itself in sum.
    // eg. 6 = 1 + 2 + 3(all divides 6)
    int sum = 1;
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != (n / i))
                sum += n / i;
        }
    }

    return (sum == n);
}

int main()
{

    // numberOfDigits();
    // numberOfOddDigits();
    // int ans = reverseNumber(3452);
    // cout << ans<<endl;
    // PalindromeNumber();
    // cout << Palindrome(434);
    // cout << largestDigit(01);
    // cout << factorial(5); // 120
    // cout << armStrongNumber(370);
    cout << perfectNumber(28) << endl; // 1 (true)
    return 0;
}
