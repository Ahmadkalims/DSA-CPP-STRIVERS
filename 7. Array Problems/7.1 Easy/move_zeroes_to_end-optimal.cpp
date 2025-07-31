#include<iostream>
#include<vector>
using namespace std;

//Approach:
//1. Take the array as input.
//2. Initialize a variable j to 0.
//3. Traverse the array.
//4. If the element is not zero, swap the element with the element at index j.
//5. Increment j.
//6. Print the array.


int main()
{
    vector<int> arr = {1, 0, 4, 2, 0 ,1, 2, 14, 0, 1};
   
    int j = 0; // Initialize j outside the loop

    for(int i=0 ; i<arr.size() ; i++)
    {
        if(arr[i]!=0)
        {
            if(i != j) {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }

    for(int i=0 ; i<arr.size() ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
