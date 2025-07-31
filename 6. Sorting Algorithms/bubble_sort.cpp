#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for(int i=n-1 ; i>0 ; i--)
    {
        for(int j=0 ; j<=i-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
 int arr[5] = {99, 88, 77, 66, 55};
 int n = 5;
 
 bubble_sort(arr, n);
 
 for(int i=0; i<n ; i++)
 {
     cout<<arr[i]<<" ";
 }
 return 0;
}

// Time Complexity: O(n^2)
// Best Case: O(n) when the array is already sorted.
// Average Case: O(n^2) when the array is partially sorted.
// Worst Case: O(n^2) when the array is sorted in descending order.
// Space Complexity: O(1)


// The bubble sort algorithm is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
// The space complexity is O(1) because we are not using any extra space. We are sorting the array in place.
// The bubble sort algorithm is not efficient for large datasets because of its O(n^2) time complexity.
// The bubble sort algorithm is stable, which means that the relative order of equal elements is preserved.
// The bubble sort algorithm is not adaptive, which means that it does not take advantage of the fact that the array is partially sorted.
// The bubble sort algorithm is not suitable for large datasets because of its O(n^2) time complexity.
// The bubble sort algorithm is easy to implement and understand, making it a good choice for small datasets.
// The bubble sort algorithm is not efficient for large datasets because of its O(n^2) time complexity.