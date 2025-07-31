#include<iostream>
using namespace std;

//reverse an array using recursion

// void reverseArray(int arr[], int start, int end)
// {
//     if (start >= end)
//     {
//         return;
//     }

//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;

//     reverseArray(arr, start+1, end-1);
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     reverseArray(arr, 0, n-1);

//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
    
// }

// Time Complexity: O(n)
// Space Complexity: O(n)
// where n is the size of the array.


//reverse an array using recursion with swap function
#include <iostream>
#include <algorithm> // For std::swap
using namespace std;

void reverse(int arr[], int l, int r) {
    if (l >= r) 
    {
        return;
    } 
    
    else 
    {
        swap(arr[l], arr[r]);
        reverse(arr, l + 1, r - 1);
    }
}

int main() 
{
	int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = sizeof(arr);
    cout << x << endl;

    int y = sizeof(arr[2]);
    cout << y << endl;

    reverse(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


// Time Complexity: O(n)
// Space Complexity: O(n)
// where n is the size of the array.
