#include<iostream>
using namespace std;

//Approach
//1. create a temp array of size n
//2. copy the elements of the original array to the temp array
//3. shift all the elements to the left by one place
//4. store the first element of the original array in the last index of the temp array
//5. copy the elements of the temp array to the original array

void leftRotate(int arr[], int length)
{
    int temp[length];

    for( int i = 0 ; i<length ; i++)
    {
        temp[i] = arr[i];
    }

    for( int i = 1 ; i<length ; i++)
    {
        arr[i-1] = temp[i];
    }
    arr[length-1] = temp[0];
}

int main(){
    int arr [5] = {1, 2, 3, 4, 5};
    int n = 5;

    leftRotate(arr, n);

    for (int i = 0 ; i < n ; i++)
    {
        cout<<arr[i];
    }
    return 0;
}

//Time Complexity: O(n)
//Best Case: O(1)
//Worst Case: O(n)
//Average Case: O(n)
//Space Complexity: O(n)