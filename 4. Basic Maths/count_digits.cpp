#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countDigits(int n)
{
    int cnt = 0;

    while(n > 0)
    {
        cnt = cnt + 1;
        n = n / 10;
    }

    return cnt;
}

int main() 
{
    int N = 329823;
    cout << "N: "<< N << endl;

    int digits = countDigits(N);

    cout << "Number of Digits in N: "<< digits << endl;

    return 0;
}


//my own code
int main()
{

    int n = 1232;

    int count = 0;

    while (n>0)
    {
        n = n/10;
        count++;
    }

    cout<<count;
    
    return 0;
}