#include<iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for(int i=0; i<=n-2 ; i++)
    {
        int min = i;
        
        for(int j=i ; j<=n-1 ; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }

            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;

        }
    }
}

int main()
{
 int n = 5;
 int arr[5] = {23, 63, 25, 75, 54};
 
 selection_sort(arr, n);
 
 for(int i=0 ; i<n ; i++)
 {
     cout<<arr[i]<<" ";
 }
 return 0;
}

// Time Complexity: O(n^2)
// Best Case: O(n^2) when the array is sorted in ascending order.
// Average Case: O(n^2) when the array is partially sorted.
// Worst Case: O(n^2) when the array is sorted in descending order.
// Space Complexity: O(1)


// The selection sort algorithm is a simple sorting algorithm that repeatedly selects the smallest element from the unsorted part of the array and swaps it with the first element of the unsorted part.
// The space complexity is O(1) because we are not using any extra space. We are sorting the array in place.
// The selection sort algorithm is not stable, which means that the relative order of equal elements is not preserved.
// The selection sort algorithm is not adaptive, which means that it does not take advantage of the fact that the array is partially sorted.
// The selection sort algorithm is not suitable for large datasets because of its O(n^2) time complexity.
// The selection sort algorithm is easy to implement and understand, making it a good choice for small datasets.
// The selection sort algorithm is not efficient for large datasets because of its O(n^2) time complexity.