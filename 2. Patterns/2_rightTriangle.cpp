#include<iostream>
using namespace std;

int main()
{
    //triangle star pattern
    int n = 5;

    for (int i=1 ; i<=n ; i++ ){

            for (int j = 0; j<i; j++)
            {
               cout<<" * ";
            }
            cout<<endl;
        }
}