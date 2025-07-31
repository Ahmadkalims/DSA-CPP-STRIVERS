#include<iostream>
using namespace std;

//Approach 
//1. Store the first element in temp variable
//2. Shift all the elements to the left by one place
//3. Store the temp value in the last index of the array

void leftRotate(int arr[], int length)
{
    int temp = arr[0];

    for( int i = 1 ; i<length ; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[length-1] = temp;
}

int main()
{
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
//Space Complexity: O(1)
