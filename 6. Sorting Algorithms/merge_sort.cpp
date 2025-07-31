#include<iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high);

void merge_sort(int arr[], int low, int high)
{
    if(low < high)
    {
        int mid = low + (high - low) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = arr[low + i];
    for (int i = 0; i < n2; i++)
        right[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// Time Complexity: O(n log n)
// Best Case: O(n log n) when the array is already sorted.
// Average Case: O(n log n) when the array is partially sorted.
// Worst Case: O(n log n) when the array is sorted in descending order.
// Space Complexity: O(n)

// The merge sort algorithm is a divide and conquer algorithm that divides the array into two halves, sorts the two halves, and then merges them.
// The space complexity is O(n) because we are using extra space for the left and right arrays.
// The merge sort algorithm is stable, which means that the relative order of equal elements is preserved.
// The merge sort algorithm is adaptive, which means that it takes advantage of the fact that the array is partially sorted.
// The merge sort algorithm is suitable for large datasets because of its O(n log n) time complexity.