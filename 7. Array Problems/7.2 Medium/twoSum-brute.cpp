#include<iostream>
using namespace std;


//Self Made program Brute force
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i!=j && (arr[i]+arr[j]==6)){
            cout<<arr[i]<<arr[j]<<endl;
            }
        }
    }
}

