#include<iostream>
using namespace std;

int main()   
{    
    int n=7;
    int flag=0;
    int m=n/2;

    for(int i=2 ; i<=m ; i++)
    {
        if(n % i == 0)
        {
            cout<<"Number is not Prime."<<endl;
            flag=1;
            break;
        }
    }

    if (flag==0)
        cout << "Number is Prime."<<endl;

    return 0;
}

