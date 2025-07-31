#include<iostream>
using namespace std;

//Approach:
//Initialize largest as starting element and second largest as INT_MIN.
//Iterate through the array and update the largest and second largest elements.
//Return the second largest element.

int second_largest(int arr[], int n)
{
  int largest = arr[0];
  int sLargest =  INT_MIN; // INT_MIN is the minimum value of int.
  
  for(int i=1 ; i<n ; i++)
  {
    if(arr[i] > largest)
    {
      sLargest = largest;
      largest = arr[i];
    }
    else if(arr[i]<largest && arr[i]>sLargest)
    {
      sLargest = arr[i];
    }
  }
  return sLargest;
}


int second_smallest(int arr[], int n)
{
  int smallest = arr[n-1];
  int sSmallest =  INT_MAX; // INT_MAX is the maximum value of int.
  
  for(int i=n-2 ; i>-1 ; i--)
  {
    if(arr[i] < smallest)
    {
      sSmallest = smallest;
      smallest = arr[i];
    }
    else if(arr[i]>smallest && arr[i]<sSmallest)
    {
      sSmallest = arr[i];
    }
  }
  return sSmallest;
}



int main()
{
  int arr[5] = {34, 562, 222, 1, 5123};
  int n = 5;
  
  int sl = second_largest(arr, n);
  int ss = second_smallest(arr, n);
  
  cout<<sl<<endl;
  cout<<ss<<endl;
  
  
  return(0);
}

// Time Complexity: O(n)
// Best Case: O(n) when the first element is the largest.
// Average Case: O(n) when the largest element is in the middle of the array.
// Worst Case: O(n) when the last element is the largest.
// Space Complexity: O(1) due to no extra space used.