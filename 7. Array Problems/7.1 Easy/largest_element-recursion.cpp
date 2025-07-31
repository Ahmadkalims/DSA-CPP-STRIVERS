#incldue<iostream>
using namespace std;

int largest(int arr[], int length)
{
    if(length == 1)
    {
        return arr[0];
    }
    else
    {
        int max = largest(arr, length-1);
        if(max > arr[length-1])
        {
            return max;
        }
        else
        {
            return arr[length-1];
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    
    cout<<largest(arr, n);
    
    return 0;
}

// Time Complexity: O(n)
// Best Case: O(n) when the first element is the largest.
// Average Case: O(n) when the largest element is in the middle of the array.
// Worst Case: O(n) when the last element is the largest.
// Space Complexity: O(n) due to recursion stack.

