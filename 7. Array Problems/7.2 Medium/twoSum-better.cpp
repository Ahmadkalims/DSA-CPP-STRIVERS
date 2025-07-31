#include<iostream>
using namespace std;

//vector can be used to improve space complexity and make it more dynamic
int main()
{
    int arr[5]={1, 2, 3, 4, 5};
    int n = 5;

    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]+arr[j] == 6){
                cout<<arr[i]<<arr[j]<<endl;
            }
        }
    }
}