#include<iostream>
using namespace std;

int main()
{
    //square star pattern
    int n = 5;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"*    ";
        }
        cout<<endl;
    }
}