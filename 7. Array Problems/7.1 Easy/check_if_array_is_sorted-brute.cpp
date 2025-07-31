#include<iostream>
using namespace std;

//Approach:
//1. Traverse the array 2 times
//2. compare inner array element with outer array element
//3. If inner element is smaller than outer element then return false
//4. If no such case found then return true

bool isSorted(int arr[], int n)
{
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[j] < arr[i]){
                return false;
            }
        }    
    }

    return true;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    int ans = isSorted(arr, n);

    if(ans) cout << "Array is sorted" << endl;
    else cout << "Array is not sorted" << endl;

}