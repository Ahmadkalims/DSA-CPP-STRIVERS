#include <iostream>
using namespace std;

int main()
{
    int n = 1221;
    int duplicate = n;
    int rev = 0;

    while (n > 0)
    {
        int last_digit = n % 10;
        rev = rev * 10 + last_digit;
        n = n / 10;
    }

    if (duplicate == rev)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
}