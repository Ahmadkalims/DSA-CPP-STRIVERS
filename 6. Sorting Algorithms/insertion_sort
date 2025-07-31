#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for(int i=0 ; i<n ; i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}

int main()
{
 int arr[5] = {99, 88, 77, 66, 55};
 int n = 5;
 
 insertion_sort(arr, n);
 
 for(int i=0; i<n ; i++)
 {
     cout<<arr[i]<<" ";
 }
 return 0;
}

// Time Complexity: O(n^2)
// Best Case: O(n) when array is already sorted
// Worst Case: O(n^2) when array is sorted in reverse order
// Space Complexity: O(1)