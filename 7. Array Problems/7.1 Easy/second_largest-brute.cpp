#include<iostream>
#include<vector>
using namespace std;

//Approach: 
//Find the largest element in the array
//remove the largest from the array. 
//Then find the largest element in the new array which will be the second largest element in the original array.


int largest(vector<int> arr)
{
    int largest = arr[0];
    int largest_index = 0;

    for(int i = 1; i < arr.size() ; i++) 
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
            largest_index = i;
        }
    }
    return largest_index;
}

int main()
{
    vector<int> arr= {1, 2, 3, 4, 5};
    vector<int> duplicate = arr;

    int largest_index = largest(arr); // identifier cannot be same name as the function name
    duplicate.erase(duplicate.begin() + largest_index);
    int second_largest_index = largest(duplicate);

    cout << "Second Largest Element is: " << arr[second_largest_index] << endl;

    return 0;
}

// Time Complexity: O(n)
//Best Case: O(1) when the largest element is at the end of the array.
//Worst Case: O(n) when the largest element is at the beginning of the array.
//Average Case: O(n) when the largest element is in the middle of the array.
// Space Complexity: O(n) for the duplicate array.
// Space Complexity: O(1) for the rest of the code.
