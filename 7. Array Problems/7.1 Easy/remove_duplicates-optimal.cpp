#include<iostream>
using namespace std;

//Approach:
//1. Traverse the array
//2. If the current element is not equal to the next element then move the current element to the next position
//3. Return the length of the array without duplicates

int removeDuplicates(int arr[], int n)
{
    int i = 0;
    for(int j = 1; j < n; j++)
    {
        if(arr[i] != arr[j])
        {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i + 1;  // Return the length of the array without duplicates
}

int main()
{
    int arr[5] = {1, 2, 2, 3, 4};
    int n = 5;

    int length = removeDuplicates(arr, n);
    for(int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";  // Print each element with a space
    }

    return 0;
}

// Time Complexity: O(n)
// Best Case: O(n) when all elements are unique.
// Average Case: O(n) when some elements are repeated.
// Worst Case: O(n) when all elements are the same.
// Space Complexity: O(1)
// In this approach, we are not using any extra space. We are just modifying the array in place. Hence, the space complexity is O(1).
// The above code is the optimal solution to the problem. It is the most efficient solution with a time complexity of O(n) and a space complexity of O(1).