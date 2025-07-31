#include <iostream>
using namespace std;

//using brute force

int largest(int arr[], int length)
{
  int largest = arr[0];

  for(int i=1 ; i<length ; i++) // i=1 comparing second element to index 0
  {
    if(arr[i] > largest) // USE >
    {
      largest = arr[i];
    }
  }

    return largest; // outside of for loop
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
// Space Complexity: O(1)

