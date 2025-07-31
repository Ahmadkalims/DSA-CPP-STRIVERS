#include <iostream>
using namespace std;

// int main()
// {

//     int n = 357;

//     //using for loop
//     for (int i = 1; n>0 ; i++)
//     {
//         int last_digit = n%10;
//         cout<<last_digit;
//         n = n/10; 
//     }
    
//     //using while loop
//     while (n>0)
//     {
//         int last_digit = n%10;
//         cout<<last_digit;
//         n = n/10;
//     }

//      return 0;

// }

int main()
{
    int n = 12345;
    int rev = 0;

    while (n>0)
    {
        int last_digit = n%10;
        rev = rev*10 + last_digit;
        n = n/10;
    }

    cout<<rev;
    
}