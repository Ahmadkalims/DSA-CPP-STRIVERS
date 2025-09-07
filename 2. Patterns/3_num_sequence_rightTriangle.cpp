#include<iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i=1;i<=n;i++)
    {
        for (int k = n-i-1 ; k>=0 ; k-- )
        {
            cout<<"  ";
        }

        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }

        for (int k = i-1; k >= 1; k--) 
        {
            cout<< k <<" ";
        }

        cout<<endl;
        }
}