#include <iostream>
using namespace std;

// Factorial using recursion
int factorial(int n) 
{
    if (n == 0) 
    { 
        return 1;
    }
    return n * factorial(n - 1);
}

int main() 
{
    int n = 10;

    cout << factorial(n);
    cout<<"Hello";

    return 0;
}
