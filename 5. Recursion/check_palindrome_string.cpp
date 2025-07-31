#include<iostream>
using namespace std;

bool isPalindrome(string str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }

    return (str[start] == str[end]) && isPalindrome(str, start+1, end-1);
}  

int main()
{
    string str = "abba";
    int n = str.length();

    if (isPalindrome(str, 0, n-1))
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)
// where n is the size of the string.
// The space complexity is O(n) because the recursive function will be called n/2 times and each time it will take O(1) space.