#include<iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};

    int n = 3;

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0 ; i<n ; i++){
        for(int j=i ; j<n ; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n/2 ; j++){
            swap(arr[i][j], arr[i][n-j-1]);
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}